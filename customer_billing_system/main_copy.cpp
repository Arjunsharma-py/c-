#include <iostream>
#include <conio.h>
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;

class customer
{
public:
    struct just_for_one
    {
        char item[20];
        float price;
    } b[100];
    string item_ins;
    void instant();
    void display();
    int no_items;
    float total;
    float discount;
    float dis;
};

void customer::instant()
{
    cout << "How many items are there: ";
    cin >> no_items;
    for (int i = 0; i < no_items; i++)
    {
        cout << "Item " << i + 1 << " name and price(with space): ";
        cin.getline(b[i].item, 20);
        cin >>b[i].price;           
        total=total+b[i].price;
    }
    cout<<"Enter the discount(for no discount write 0): ";
    cin>>dis;
    discount=((100-dis)/total)*100;
};


void customer::display()
{
    system("cls");
    for (int i = 0; i < no_items; i++)
    {
        cout<<"\n"<<b[i].item<<"\t"<<b[i].price;
    }
    cout<<"\nTotal:  "<<total;
    cout<<"\ndiscount: "<<dis;
    cout<<"\nNet Amount: "<<discount;
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