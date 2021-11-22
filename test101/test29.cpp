// this is just a test and i don't want to a proper code

#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main()
{
    string m;
    fstream file;
    cout<<"Enter the text: ";
    cin>>m;
    file.open("file_test.txt");
    if(file.is_open())
    {
        file << m;
        file.close();
    }
    else
        cout<<"file not found";
    return 0;  
}