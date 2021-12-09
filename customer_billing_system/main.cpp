#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>

using namespace std;

class customer
{
public:
    struct just_for_one
    {
        string item;
        float price;
        int qnt;
    } b[100];
    string item_ins;
    void instant();
    void display();
    int no_items=0;
    float total=0;
    float final_p=0;
    float dis;
};

void customer::instant()
{
    cout << "How many items are there: ";
    cin >> no_items;
    for (int i = 0; i < no_items; i++)
    {
        cout << "Item " << i + 1 << ": ";
        getline(cin,b[i].item);
        cout<<"Enter price and quantity: ";
        cin>>b[i].price>>b[i].qnt;
        total=total+b[i].price*b[i].qnt;
    }
    cout<<"Enter the discount(for no discount write 0): ";
    cin>>dis;
    final_p=total*((100-dis)/100);
};

void customer::display()
{
    system("cls");
    cout<<setw(2)<<"S. no."<<setw(15)<<"Item"<<setw(25)<<"Price"<<setw(35)<<"qantity";
    for (int i = 0; i < no_items; i++)
    {
        cout<<"\n"<<(i+1)<<setfill(' ')<<setw(20+sizeof(b[i].item));
        cout<<b[i].item<<setfill(' ')<<setw(10)<<b[i].price<<setfill(' ')<<setw(10)<<b[i].qnt;
    }
    cout<<"\nTotal:  "<<total;
    cout<<"\ndiscount: "<<dis;
    cout<<"\nNet Amount: "<<final_p;
}

int main()
{
    customer c;
    int n;
    cout << "\t\t\t\tCostumer Billing System\n";
    cout << "1. Instant bills\n";
    cout << "2. Preloaded bills\n";
    cin >> n;
    if (n == 1)
    {
        c.instant();
    }
    else if (n == 2)
    {
        // c.preload();
        cout << "hi";
    }
    else
        cout << "Wrong Input";
    c.display();
    return 0;
}