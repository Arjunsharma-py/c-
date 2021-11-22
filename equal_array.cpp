#include <iostream>

using namespace std;

int main()
{
    int *a, t, n, grt, ind_grt = 0, count = 0, sml;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        a = new int[n];
        int in_sml;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        grt = a[0];
        sml = a[0];
        for (int j = 0; j < n; j++)
        {
            if (grt < a[j])
            {
                grt = a[j];
            }
            if (sml > a[j])
            {
                sml = a[j];
                in_sml = j;
            }
        }
        count = 0;

        while (a[in_sml] != grt)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[in_sml] < grt)
                {
                    if (grt > a[j] && grt != a[j])
                    {
                        a[j] = a[j] + 1;
                        if (j==in_sml)
                        {
                            count++;
                        }
                    }
                }
                /* code */
            }
        }
        cout << count << endl;
    }
    return 0;
}