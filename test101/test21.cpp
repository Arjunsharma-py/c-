#include<iostream>
#include<string>
#include<random>
#include<time.h>

using namespace std;

class options
{
    
    public:
        int take_input();
        int n;
        char store[100] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%&_"};

};

int main()
{
    options o;
    int c=0;
    o.take_input();
    cout<<"generated password is : ";
    srand(time(0));
    for (int i = 0; i < o.n; i++)
    {
        c =rand()%69;
        cout<<o.store[c];
    }   
    return 0;
}

int options ::take_input()
{
    cout<<"Enter the how mauch big password do you want(password>8): ";
    cin>>n;
    return n;
}