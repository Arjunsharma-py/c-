#include<iostream>

using namespace std;

int main()

{
    int n,k,count=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        if (t%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}