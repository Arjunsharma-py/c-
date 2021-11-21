#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int a[10], n, b;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j]>a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }   
    return 0;
}