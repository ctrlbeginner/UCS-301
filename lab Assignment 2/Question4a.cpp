#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50], s2[50];
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    int l1 = strlen(s1), l2 = strlen(s2);
    for (int i = 0; i <= l2; i++)
        s1[l1 + i] = s2[i];
    cout << "After concat: " << s1 << "\n";
}
