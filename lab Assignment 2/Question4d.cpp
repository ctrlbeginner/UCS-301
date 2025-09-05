#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    char arr[20][50];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                char temp[50];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";
}
