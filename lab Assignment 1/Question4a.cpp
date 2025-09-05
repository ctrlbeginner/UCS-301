#include <iostream>
using namespace std;

int main()
{
    int n, arr[30];
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = n - 1, temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed array:\n";
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";
    cout << "\n";
    return 0;
}
