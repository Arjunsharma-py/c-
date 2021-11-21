#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    system("cls");
    ifstream ifl;
    string st;
    ifl.open("new.txt");
    cout<<"Enter the string to find: ";
    getline(ifl, st);
    ifl.close();
    return 0;  
}