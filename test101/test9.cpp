#include<iostream>
using namespace std;

void DashBoard(void);
void Input(void);
int main()

{
    DashBoard();
    return 0;
}

void DashBoard()
{
    char a[3][5] = {'_', '+', '_', '+', '_', '_', '+', '_', '+', '_', '_', '+', '_', '+', '_'};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    Input();
}

void Input()
{
    int b;
    cout<<"Enter the number (1-9): ";
    cin>>b;
}