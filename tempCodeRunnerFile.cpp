#include<bits/stdc++.h>
using namespace std;
class ts
{
public:
       struct test
       {
              string name2;
              int check;
       } b[100];
       void input();
       void display();

};

void ts::input()
{
       for (int i = 0; i < 2; i++)
       {
              cin.ignore();
              getline(cin, b[i].name2); 
              cin>>b[i].check;// for input
              /* code */
       }
}

void ts::display()
{
       for (int i = 0; i < 2; i++)
       {
              cout << b[i].name2; // for printing
              cout<<b[i].check;// for input
              /* code */
       }
}

int main()
{

       ts c;
       c.input();
       c.display();
       return 0; // for printing
}