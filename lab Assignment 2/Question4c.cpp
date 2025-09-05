#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cout << "Enter string: ";
    cin >> s;
    int n = strlen(s), k = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            s[k++] = c;
        }
    }
    s[k] = '\0';
    cout << "After removing vowels: " << s << "\n";
}
