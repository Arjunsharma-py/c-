#include<iostream>

using namespace std;

int main()

{
    double speed, fe, fr;

    fe = 2e10;
    fr = 2.0000004e10;

    speed = 6.685e8 * ((fe - fr) / (fe + fr));
    cout<<"speed is "<<speed;
    return 0;
}