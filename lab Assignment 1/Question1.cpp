#include <iostream>
using namespace std;

int main()
{
    int arr[50], n = 0, ch;
    do
    {
        cout << "\n1.Create  2.Display  3.Insert  4.Delete  5.Search  6.Exit\n";
        cin >> ch;

        if (ch == 1)
        {
            cout << "Enter size: ";
            cin >> n;
            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
        }
        else if (ch == 2)
        {
            cout << "Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << "\n";
        }
        else if (ch == 3)
        {
            int pos, val;
            cout << "Enter pos and value: ";
            cin >> pos >> val;
            if (pos < 0 || pos > n)
            {
                cout << "Invalid\n";
            }
            else
            {
                for (int i = n; i > pos; i--)
                    arr[i] = arr[i - 1];
                arr[pos] = val;
                n++;
            }
        }
        else if (ch == 4)
        {
            int pos;
            cout << "Enter pos to delete: ";
            cin >> pos;
            if (pos < 0 || pos >= n)
            {
                cout << "Invalid\n";
            }
            else
            {
                for (int i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
            }
        }
        else if (ch == 5)
        {
            int key, f = -1;
            cout << "Enter value to search: ";
            cin >> key;
            for (int i = 0; i < n; i++)
                if (arr[i] == key)
                {
                    f = i;
                    break;
                }
            if (f == -1)
                cout << "Not found\n";
            else
                cout << "Found at " << f << "\n";
        }
    } while (ch != 6);
    return 0;
}
