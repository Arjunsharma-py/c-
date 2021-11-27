#include<iostream>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        if (n==0 || k==0)
        {
            cout<<"0\n";
        }
        else if (n%k==0 && n>k)
        {
            cout<<n/k<<endl;
        }
        else if (k%n==0)
        {
            cout<<"1\n";
        }
        else
            cout<<n<<"\n";
    }
    return 0;
}