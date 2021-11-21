#include<iostream>

using namespace std;

int main()
{
    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    long double average = 0;
    cout<<"Enter the values of numbers: ";
    cin>>num1>>num2>>num3;
    average = (num1 + num2 + num3)/3.0;
    cout<<"\nvalue of given number is : "<<average<<" and the address of the variable is "<<&average;
    return 0;
}