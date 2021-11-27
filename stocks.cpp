#include<iostream>

using namespace std;

int main()
{
    int t;
    float total, s, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        total = 0;
        cin>>s>>a>>b>>c;
        total = (s + ((c/100)*s));
        if (total>=a && total<=b)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}