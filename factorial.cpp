#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int factorial(int), a;
    cout<<"Enter the no.: ";
    cin>>a;
    cout<<factorial(a);
    getch();
}

int factorial(int d)
{
    int fact;
    if (d==1)
        return 1;
    else
        return d*factorial(d-1);
}