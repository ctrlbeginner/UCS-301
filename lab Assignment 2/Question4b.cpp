#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50];
    cout << "Enter string: ";
    cin >> s;
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        char t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
    cout << "Reversed: " << s << "\n";
}
