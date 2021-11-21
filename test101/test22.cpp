#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

class generator
{
    public:
        int n = 0, mode = 0, value = 0;
        int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        char letters[53] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        char special[10] = {"!@#$%&_"};
        void take_input();
        void rand_num();
        void rand_letter();
        void rand_special(); 
        void generate_pass();
};

int main()
{
    generator g;
    srand(time(0));
    g.take_input();
    g.generate_pass();
    return 0;
}


void generator ::take_input()
{
    system("cls");
    cout<<"How long password do you need: ";
    cin>>n;
    system("cls");
    cout<<"\t      Easy(1)                         Medium(2)                         strong(3)\n";
    cout<<"  (contains numeric values only)      (letters and numeric values)      (includes special characters) ";
    cout<<"\n\nEnter your choice: ";
    cin>>mode;
}

void generator :: rand_num()
{
    int i = 0;
    i = rand()%10;
    cout<<num[i];
}

void generator :: rand_letter()
{
    int i = 0;
    i = rand()%53;
    cout<<letters[i];
}

void generator :: rand_special()
{
    int i = 0;
    i = rand()%7;
    cout<<special[i];
}

void generator :: generate_pass()
{
    cout << "\nYour generated password is : ";
    for (int i = 0; i < n; i++)
    {
        value = rand()%3;
        if (value == 0 && mode > 0 )
        {
            rand_num();
        }
        else if (value == 1 && mode > 1)
        {
            rand_letter();
        }
        else if (value == 2 && mode > 2 && i != 0)
        {
            rand_special();
        }
        else
        {
            i = i-1;
        }
    }
    
}