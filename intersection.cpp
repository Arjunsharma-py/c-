#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    int n, m, a[10], b[10], c[20], flag, count = 0;
    cout << "Enter the size of first set: ";
    cin >> n;
    cout << "Enter the element of set:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the size of second set: ";
    cin >> m;
    cout << "Enter the element of set:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        flag = 0;

        for (int j = 0; j < count; j++)
        {
            if (a[i] == c[j])
            {
                flag = 1;
                break;
            }
        }
        for (int k = 0; k < m; k++)
        {
            if (flag == 0)
            {
                if (a[i] == b[k])
                {
                    c[count] = a[i];
                    count++;
                    /* code */
                }
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}