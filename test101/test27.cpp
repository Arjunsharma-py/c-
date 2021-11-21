#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class test
{
    int first, second, count1=0, count2=0;
    int *a = new int(first);
    int *b = new int(second);
    public:
        void take_input();
        void factors();
        void show_output();
};

int main()
{
    test t;
    t.take_input();
    t.factors();
    t.show_output();
    return 0;
}


void test::take_input()
{
    system("cls");
    cout<<"Enter two numbers to find their factors";
    cin>>first>>second;
}

void test::factors()
{
    for (int i = 0; i < first/2; i++)
    {
        if ((first/2)%i==0)
        {
            a[count1]=i;
            count1++;
        }
    }

    for (int i = 0; i < second/2; i++)
    {
        if ((second/2)%i==0)
        {
            b[count2]=i;
            count2++;
        }
    }
}

void test::show_output()
{
    for (int i = 0; i < count1; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\n";

    for (int i = 0; i < count2; i++)
    {
        cout<<" "<<b[i];
    }
}