#include <iostream>

using namespace std;

int main()
{
    //Anushka Mandrawliya Rolln0:2231
    int i, j, n, pos, t, s, a[30];
    cout << "Enter the number of elements:";
    cin >> n;
    cout << "\nEnter the elements\n";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        s = a[i];
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (s > a[j])
            {
                s = a[j];
                pos = j;
            }
        }

        t = a[i];
        a[i] = a[pos];
        a[pos] = t;
    }

    cout << "\nSorted list is as follows\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}