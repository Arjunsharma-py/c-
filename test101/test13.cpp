#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string str1= "arjun";
    string str2;
    bool arr;
    cout << "Enter password: ";
    cin>>str2;
    if(str1 == str2)
    {
        arr = true;
    }
    if (arr == true)
    {
        /* code */
        cout << " hurray!";
    }
    else
    cout << "wrong password";
    

}