#include <iostream>
using namespace std;

int main()
{
    int r, c, a[10][10];
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Row sums:\n";
    for (int i = 0; i < r; i++)
    {
        int s = 0;
        for (int j = 0; j < c; j++)
            s += a[i][j];
        cout << "Row " << i << ": " << s << "\n";
    }

    cout << "Column sums:\n";
    for (int j = 0; j < c; j++)
    {
        int s = 0;
        for (int i = 0; i < r; i++)
            s += a[i][j];
        cout << "Col " << j << ": " << s << "\n";
    }

    return 0;
}
