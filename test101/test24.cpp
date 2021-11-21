#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <cstdlib>


using namespace std;

int main()
{
    int hr=0, min=0, sec=0;
    while (true)
    {
        system("cls");
        cout<<"\t\t********\n";
        cout<<"\t\t "<<hr<<":"<<min<<":"<<sec<<"\n";
        cout<<"\t\t********";
        sec++;
        if (sec==60)
        {
            min++;
            sec=0;
            if (min==60)
            {
                hr++;
                min = 0;
                if (hr==24)
                {
                    hr=0;
                }
            }
        }
        Sleep(1);
        
    }
    return 0;
}