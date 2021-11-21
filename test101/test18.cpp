#include <iostream>
#include <fstream>
#include <string>
#include "test17.cpp"

using namespace std;

int main()

{
    string username;
    cout << "Enter your username: ";
    getline(cin, username);
    string choice;
    choice = Searching(username);
    cout << "\n" << choice; 
    if (choice == "n")
    {
        fstream file("UserName.txt", ios ::out | ios ::app);
        file << " \n" << username;
        file.close();
        cout << "Username successfully created";
        /* code */
    }
    else
    {
        cout << "Username already exist";
    }
    // cout << x;
    // return 0;
}
