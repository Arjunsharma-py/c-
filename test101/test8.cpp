#include<iostream>
using namespace std;

int vmax(int, int);
int main()
{
    int a, b, print;
    cout<<"Enter two numbers";
    cin>>a>>b;
    vmax(a, b);
    return 0;
}

int vmax(int x, int y)
{
    if(x>y)
    cout<<x<<" is greater";
    else
    cout<<y<<" is greater";
    return 0;
}