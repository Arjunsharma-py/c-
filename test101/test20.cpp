#include<iostream>
#include<string>
#include "test18.cpp"

using namespace std;

int main()
{
    string username, m;
    cout << "Enter your username: ";
    getline(cin, username);
    InsertInfo(username);
    return 0;
}