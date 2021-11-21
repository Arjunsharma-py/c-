#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int flag, n, m, a[10], b[10], c[20], d[20], count=0;
    cout<<"Enter the size of first set: ";
    cin>>n;
    cout<<"Enter the element of set:\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of second set: ";
    cin>>m;
    cout<<"Enter the element of set:\n";
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    for (int  i = 0; i < n; i++)
    {
        c[i]=a[i];
    }
    for (int  i = 0; i < m; i++)
    {
        c[i+n]=b[i];
    }
    for (int i = 0; i < n+m; i++)
    {
        flag=0;
        for (int j = 0; j < count; j++)
        {
            if (d[j]==c[i])
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            d[count]=c[i];
            count++;
        }
        
    }
        
    for (int  i = 0; i < count; i++)
    {
        cout<<d[i];
    }
    return 0;
}