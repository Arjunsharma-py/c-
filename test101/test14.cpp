#include<iostream>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string st = "arjunsharma@.com";
    string st2;
    fstream file("text.txt");
    // file << st;
    getline(file, st2);
    cout << st2;
    return 0;
}