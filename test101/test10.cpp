#include<iostream>
#include<random>
#include<time.h>

using namespace std;

char board[9] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
void Play(void);
// int ChangeBoard();
int Computer();
void DisplayBoard(void);
int PlayersTurn();
bool GameOn = true;
int Winner();
bool flag = false;

int main()
{
    while (GameOn == true)
    {
        Play();
        GameOn = Winner();
        cout<<GameOn;
        /* code */
    }
    if(flag==true)
    {
        cout<<"\n\n\t\tHurray! You win the match";
        DisplayBoard();
    }
    else
    {
        cout<<"\n\n\t\tSorry! Better luck next time";
        DisplayBoard();
    }
    return 0;
}

void Play()
{
    // ChangeBoard();
    DisplayBoard();
    PlayersTurn();
    Computer();
}

void DisplayBoard()
{
    cout<<"\n"<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<"\n";
    cout<<"--+---+--\n";
    cout<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<"\n";
    cout<<"--+---+--\n";
    cout<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<"\n";
}
// int ChangeBoard()
// {
//     for (int i = 0; i < 9; i++)
//     {
//         board[i]='_';
//         /* code */
//     }
//     return 0;
// }

int Computer()
{
    int pos;
    srand(time(0));
    pos = rand()%10;
    if (board[pos-1] == '_')
    {
        board[pos-1] = 'O';
        /* code */
    }
    else
    Computer();
    
    return 0;
}

int PlayersTurn()
{
    int pos;
    cout<<"\nEnter the number (1-9): ";
    cin>>pos;
    if (board[pos-1] == '_')
    {
        board[pos-1] = 'X';
        /* code */
    }
    else
    {
        cout<<"Opps! invalid input";
        PlayersTurn();
    }
    // Computer();
    return 0;
}

int Winner()
{
    if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X'|| board[3] == 'X' && board[4] == 'X' && board[5] == 'X'|| board[6] == 'X' && board[7] == 'X' && board[8] == 'X' || board[0] == 'X' && board[4] == 'X' && board[8] == 'X' ||  board[2] == 'X' && board[4] == 'X' && board[6] == 'X')
    {
        /* code */
        flag = true;
        return false;
    }
    else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O'|| board[3] == 'O' && board[4] == 'O' && board[5] == 'O'|| board[6] == 'O' && board[7] == 'O' && board[8] == 'O' || board[0] == 'O' && board[4] == 'O' && board[8] == 'O' ||  board[2] == 'O' && board[4] == 'O' && board[6] == 'O')
    {
        /* code */
        flag = false;
        return false;

    }
}