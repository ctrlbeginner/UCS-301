#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter uppercase char: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    cout << "Lowercase: " << ch << "\n";
}
