//Calculate distinct elements in array

#include <iostream>
using namespace std;

int main()
{
    cout << " Enter the number of elements in array " << endl;
    int n, a[50];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < i; j++)
            if (a[i] == a[j])
                f = 1;
        if (!f)
            cnt++;
    }
    cout << "Distinct elements: " << cnt << "\n";
}
