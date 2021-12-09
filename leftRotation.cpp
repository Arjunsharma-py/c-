#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,r,t=0;
    vector<int> v;
    cin>>n>>r;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        v.push_back(t);
    }
    for (int i = 0; i < r; i++)
    {
        int temp;
        temp = v.front();
        for (int j = 1; j < n; j++)
        {
            if (j==n-1)
            {
                v.back()=temp;
            }
            else
            {
                v.at(j-1)=v.at(j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
    }
    return 0;
}