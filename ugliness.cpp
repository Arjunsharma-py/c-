#include <iostream>

using namespace std;

int main()
{
    int t, n, k, *a, count;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 0;
        for (int i = 1; i <= k; i++)
        {
            count = 0;
            for (int j = n; j > 0; j--)
            {
                if (j == n)
                {
                    for (int m = n; m > 0; m--)
                    {
                        if (a[m] != i)
                        {
                            /* code */
                            c = a[m];
                            break;
                        }
                    }
                }

                if (a[j] != i)
                {
                    if (a[j] != c && a[j - 1] != i)
                    {
                        count++;
                    }
                    c = a[j];
                }
            }
            cout << count<<" ";
        }
        cout<<endl;
    }
}