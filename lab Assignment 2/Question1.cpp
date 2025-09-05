#include <iostream>
using namespace std;

int main()
{
    int n, arr[50], key, low, high, mid, found = -1;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter sorted array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter key: ";
    cin >> key;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found == -1)
        cout << "Not found\n";
    else
        cout << "Found at index " << found << "\n";
}
