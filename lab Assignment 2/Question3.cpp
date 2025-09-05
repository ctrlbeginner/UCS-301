#include <iostream>
using namespace std;

int main()
{
    int n, arr[50];
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter sorted array with one missing number:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int miss = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > 1)
        {
            miss = arr[i] + 1;
            break;
        }
    }
    cout << "Missing number is " << miss << "\n";
}
