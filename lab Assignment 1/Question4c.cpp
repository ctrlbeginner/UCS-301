#include <iostream>
using namespace std;

int main()
{
    int r, c, mat[10][10];
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            cout << mat[j][i] << " ";
        cout << "\n";
    }
    return 0;
}
