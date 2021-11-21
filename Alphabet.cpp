#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, count = 0, flag = 1;
    char c[100];
    string a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        count = 0;
        cin >> a;
        cin >> b;
        for (int i = 0; i < b.length(); i++)
        {
            flag = 0;
            for (int j = 0; j < a.length(); j++)
            {
                if (b[i] == a[j])
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                c[count] = b[i];
                count++;
                flag = 1;
                /* code */
            }
        }
        if (count == 0)
        {
            cout << "-1";
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                cout << c[i];
            }
        }
    }
    return 0;
}