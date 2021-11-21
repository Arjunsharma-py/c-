#include<iostream>
#include<conio.h>

using namespace std;

void TOH(int,char,char,char)

int main()

{
    int n, a, b, c;
    cout<<"Enter the no.:";
    cin>>n;
    return ;
}

void TOH(int n, char from_beg, char aux, char to_end)
{
    TOH(n-1,from_beg,to_end,aux);
    cout<<from_beg<<"to"<<to_end;
    TOH(n-1,aux,from_beg,to_end);
    
}