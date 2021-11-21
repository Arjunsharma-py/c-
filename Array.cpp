#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int t, n, q, x, y, a[20], total=0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>q;
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        cout<<"Case: "<<i;
        for (int k = 0; k < q; k++)
        {
            total=0;
            cin>>x>>y;
            for (int j = 0; j < n; j++)
            {
                if (x == a[j])
                {
                    a[j]=y;
                }
            }
            for (int j = 0; j < n; j++)
            {    
                if ( j!=0)
                {
                    total= total + abs(a[j-1]-a[j]);
                }
            }
            cout<<total;
        }
    }
    
    return 0;
}
// well this is just a comment 