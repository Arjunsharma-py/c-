#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float dev,m,t,n,k;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        if(n>k)
        {
            dev =n/k;
            int dev2 = int(dev);
            m = dev-dev2;
            if (m<1)
            {
                cout << ceil(dev);
            }
            else
                cout<<dev;
        }
        else
            cout<<"1";
    }
}