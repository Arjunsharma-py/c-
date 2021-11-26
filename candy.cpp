#include<iostream>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    for (size_t i = 0; i < t; i++)
    {
        cin>>n>>k;
        if (n<k)
            cout<<"0\n";
        else if(n%k==0)
            cout<<n/k<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}