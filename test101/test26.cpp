#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<windows.h>

using namespace std;

int main()
{
    int hr=0, min=0, i=1, sec=0;
    cout << "Enter the time as minute and sec: ";
    cin >> min >>sec;
    while (i>0)
    {
        Sleep(1000);
        system("cls");
        if (sec==0 && min==0)
        {
            /* code */
            i=0;
        }
        
        sec--;
        if (sec==0 && min!=0)
        {
            min--;
            sec=60;
        }
        cout<<min<<":"<<sec<<" time left";
    }
    return 0;
}