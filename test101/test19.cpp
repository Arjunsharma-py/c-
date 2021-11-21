#include <iostream>
#include <conio.h>

using namespace std;

class Registration
{
public:
    char first_name[10];
    char last_name[10];
    char user_name[20]={0};
    char password[20]={0};
    char user_name2[20]={0};
    char password2[20]={0};

    int ch;
    int DashBoard(void);
    void SignUp();
    void Login();
    void Register(void);
};

int main()
{
    Registration r;
    r.Register();
    return 0;
}

int Registration ::DashBoard()
{
    system("cls");
    cout << "----------------------------Sign Up(1)---------------------------------";
    cout << "\n\nAlready have an account then:-";
    cout << "\n---------------------------Login(2)------------------------------------";
    cout << "\nEnter your choice: ";
    cin >> ch;
    return ch;
}

void Registration ::Register()
{
    DashBoard();
    if (ch == 1)
    {
        /* code */
        SignUp();
    }
    else if (ch == 2)
    {
        /* code */
        Login();
    }
}

void Registration ::SignUp()
{
    int option;
    system("cls");
    cout << "\n\n\t\t\t\tSign Up\n\n\n";
    cout << "First Name: ";
    cin >> first_name;
    cout << "\nLast Name: ";
    cin >> last_name;
    cout << "\nUsername: ";
    cin >> user_name;
    cout << "\nPassword: ";
    cin >> password;
    system("cls");
    cout << "\n------------------------------------------Registration Successful-------------------------------";
    cout << "\ngoto main menu(press 0)";
    cin >> option;
    if (option==0)
    {
        Register();
        /* code */
    }
    
}

void Registration ::Login()
{
    bool test1, test2;
    int check1 = 0, check2 = 0;
    system("cls");
    char choise;
    cout<<"\n\n\t\t\tLogin\n\n\n";
    cout << "\tUsername: ";
    cin >> user_name2;
    cout << "\n\tpassword: ";
    cin >> password2;

    for (int i = 0; i < sizeof(user_name); i++)
    {
        /* code */
        if (user_name[i] != '\0')
        {
            /* code */
            check1++;
        }
        
    }
    for (int i = 0; i < sizeof(password); i++)
    {
        /* code */
        if (password[i] != '\0')
        {
            /* code */
            check2++;
        }
        
    }
    
    for (int i = 0; i < check1; i++)
    {
        /* code */
        test1 = true;
        if (user_name[i] != user_name[i])
        {
            /* code */
            test1 = false;
            break;
        }
    }
    for (int i = 0; i < check2 ; i++)
    {
        /* code */
        test2 = true;
        if (password[i] != password2[i])
        {
            /* code */
            test2 = false;
            break;
        }
    }
    
    
    if (test1 == true && test2 == true)
    {
        /* code */
        system("cls");
        cout << "---------------------------Login Successful----------------------------";
        cout << "\n---------------------------Welcome to Programming----------------------";
    }

    else
    {
        /* code */
        cout << "\nOpps! Username or password incorrect\nTry again\n";
        cout << "press y to login again: ";
        cin >> choise;
        if (choise == 'y')
        {
            /* code */
            Login();
        }
    }
}