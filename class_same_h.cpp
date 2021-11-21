#include<iostream>

using namespace std;

int main()
{
    int t,n,h[100],count;
    cin>>t>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    if(n >= 12)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n; j < i; j--)
            {
                if(h[i] == h[i+j])
                {
                    count++;
                }
            }
            
        }
        
    }
    
    return 0;
}