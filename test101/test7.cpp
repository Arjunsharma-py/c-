#include<iostream>

using namespace std;

int main()

{
    int a, b, print;
    cout<<"Enter the vlaue of a and b";
    cin>>a>>b;
    print = max(a,b);
    cout<<print;
    return 0;
}

int max(int x1, int x2)  
{
   int sum = 0;
   sum = x1 + x2;
   return sum;
}