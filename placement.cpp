#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char first, second, third, x, y;
    for (int i = 0; i < t; i++)
    {
        cin>>first>>second>>third;
        cin>>x>>y;
        if (x==first || y==first)
        {
            cout<<first<<endl;
            continue;
        }
        else if (x==second || y==second)
        {
            cout<<second<<endl;
            continue;
        }
        else if (x==third || y==third)
        {
            cout<<third<<endl;
            continue;
        }
    }
    return 0;
}