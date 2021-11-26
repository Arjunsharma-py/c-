#include<iostream>

using namespace std;

int main()
{
    int t, x, y, k;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x>>y>>k;
        if(x%k==0 && y%k==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}