#include<iostream>
#include<conio.h>

using  namespace std;

class conversion
{
    public:
        float mb=0, MB=0;
        void mb_to_MB(float mb);
        void MB_to_mb(float MB);
};

int main()

{
    conversion c;
    int n;
    cout<<"Megabit    >------------->>>    Megabyte              Press 1\n";
    cout<<"Megabyte    >------------->>>    Megabit              Press 2\n";
    cout<<"Enter your choice: ";
    cin>>n;
    switch (n)
    {
    case 1:
        c.mb_to_MB(c.mb);
        break;
    
    case 2:
        c.MB_to_mb(c.MB);
        break;

    default:
        cout<<"wrong input";
        break;
    }
    return 0;
}


void conversion::MB_to_mb(float MB)
{
    cout<<"Enter the speed in Megabyte: ";
    cin>>MB;
    cout<<"\n"<<MB*8<<" Megabit";
}

void conversion::mb_to_MB(float mb)
{
    cout<<"Enter the speed in Megabit: ";
    cin>>mb;
    float m = mb/8;
    if (m<1)
    {
        cout<<"\n"<<(m)*1024<<" Kbps";
        /* code */
    }
    else
        cout<<"\n"<<m<<" Megabyte";
    
    cout<<"\nPress any key";
    getch();
}