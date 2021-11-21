#include<iostream>

using namespace std;

int main()
{
    int x, y, t, flag;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        flag=0;
        cin>>x>>y;
        if (y%2==0)
        {
            if (x%2==0)
            {
                cout<<((y-x)/2);
            }
            else
            {
                x=x-1;
                cout<<(((y-x)/2)+1);
            }
        }
        else
        {
            if (x%2!=0)
            {
                cout<<(((y-x)/2));
            }
            else
            {
                x = x-1;
                cout<<(((y-x)/2)+1);
            }           
        }
    }
    
    return 0;
}