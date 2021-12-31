#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const char *filename = "shop.txt";

class customer
{
public:
    int recordNo = 0, quat;
    float price;
    string item, tempItem;
    void displaydata();
    void getdata();
    void erase();
    void storeddata();
};

bool isEmpty(fstream &pfile)
{
    return pfile.peek() == fstream::traits_type::eof();
}
void customer::storeddata()
{
    cout << "Enter the Item: ";
    getline(cin, item);
    cout << "Enter the price: ";
    cin >> price;
}

void customer::getdata()
{
    cout << "Enter the Item: ";
    getline(cin, tempItem);
    cout << "Enter the quantity: ";
    cin >> quat;
}

void customer::displaydata()
{
    if (recordNo == 0)
        cout << "S. no." << setw(15) << "Item" << setw(10) << "price" << setw(10) << "quantity" << setw(10) << "Value" << endl;
    cout << recordNo + 1 << "     " << setw(15) << item << setw(10) << price << setw(10) << quat << setw(10) << quat * price << endl;
}

void customer::erase()
{
    ofstream f;
    f.open("itemlist.txt", ios::trunc);
    f.close();
}

void Shop()
{
    fstream file;
    file.open(filename, ios::trunc | ios::in | ios::out);
    string st;
    cout << "Enter your shop name: ";
    getline(cin, st);
    file << st;
    file.close();
}

int main()
{
    customer cus;
    int choice;
    fstream file(filename);
    if (isEmpty(file))
        Shop();
    else
    {
        do
        {
            cout<<setw(70)<<setfill('-')<<""<<endl;
            string tp;
            getline(file,tp);
            cout<<tp;
            cout<<endl<<setw(70)<<setfill('-')<<"";
            cout << "\n\n*******Menu********";
            cout << endl
                 << "Enter your option";
            cout << endl
                 << "1 => Create bills";
            cout << endl
                 << "2 => Load details of items";
            cout << endl
                 << "3 => ";
            cout << endl
                 << "4 => Display all employee";
            cout << endl
                 << "5 => Update record of an employee";
            cout << endl
                 << "6 => Delete record of particular employee";
            cout << endl
                 << "7 => Exit from the program" << endl;
            cout << "********************" << endl;
            cin>>choice;
            // switch (choice)
            // {
            // case 1:
                
            //     break;
            
            // default:
            //     break;
            // }
        } while (choice != 4);
    }
    return 0;
}