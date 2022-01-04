#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const char *filename = "itemlist.txt";
const char *filename2 = "shop.txt";

class customer
{
public:
    float quat, price;
    string item = "", tempItem = "";
    void displaydata(int);
    void getdata();
    void erase();
    void storeddata();
    void Shop();
};

bool isEmpty(fstream &pfile)
{
    return pfile.peek() == fstream::traits_type::eof();
}
void customer::storeddata()
{
    cout << "Enter the Item: ";
    getline(cin, item);
    if (item == "No" || item == "no" || item == "NO")
    {
    }
    else
    {
        cout << "Enter the price: ";
        cin >> price;
        cin.ignore();
    }
}

void customer::getdata()
{
    cout << "Enter the Item: ";
    getline(cin, tempItem);
    if (tempItem == "No" || tempItem == "no" || tempItem == "NO")
    {
    }
    else
    {
        cout << "Enter the quantity: ";
        cin >> quat;
        cin.ignore();
    }
}

void customer::displaydata(int recordNo)
{
    if (recordNo == 0)
    {
        fstream file2(filename2);
        cout << endl
             << setw(70) << setfill('-') << "" << endl;
        string tp;
        getline(file2, tp);
        cout << tp;
        cout << endl
             << setw(70) << setfill('-') << "";
        cout << endl
             << "S. no." << setw(15) << "Item" << setw(10) << "price" << setw(10) << "quantity" << setw(10) << "Value" << endl;
    }
    cout << recordNo + 1 << "     " << setw(15) << tempItem << setw(10) << price << setw(10) << quat << setw(10) << quat * price << endl;
}

void customer::erase()
{
    ofstream f;
    f.open("itemlist.txt",ios::out | ios::trunc);
    f.close();
}

void customer::Shop()
{
    fstream file2;
    file2.open(filename2, ios::trunc | ios::in | ios::out);
    string st;
    cout << "\nEnter your shop name: ";
    getline(cin, st);
    file2 << st;
    file2.close();
}

int main()
{
    customer cus, c;
    int choice, disc, temp, temp2;
    float total=0;
    fstream file(filename), file2(filename2);
    if (isEmpty(file2))
        cus.Shop();
    do
    {
        cout << "\033[2J\033[1;1H";
        string tp;
        temp = 0, temp2 = 0;
        file2.open(filename2, ios::in);
        cout << endl
             << setw(70) << setfill('-') << "" << endl;
        getline(file2, tp);
        cout <<setfill(' ')<<setw(39)<< tp;
        file2.close();
        cout << endl
             << setw(70) << setfill('-') << "" << setfill(' ');
        cout << "\n\n*******Menu********";
        cout << endl
             << "Enter your option";
        cout << endl
             << "1 => Create bills";
        cout << endl
             << "2 => Load details of items";
        cout << endl
             << "3 => Delete item";
        cout << endl
             << "4 => Delete all items";
        cout << endl
             << "5 => Change shop name";
        cout << endl
             << "6 => Display loaded items";
        cout << endl
             << "7 => Exit from the program" << endl;
        cout << "********************" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            cout << "\033[2J\033[1;1H";
            file.open(filename,ios::in | ios::out);
            file.clear();
            file.seekg(0, ios::beg);
            file.read((char *)&cus, sizeof(cus));
            if (cus.item == "")
            {
                cout << "You have not loaded any items\nFirst load items in main menu\npress any key to back to menu...";
                getchar();
                break;
            }
            else
            {
                fstream f1;
                int x = 0;
                f1.open("temprary.txt", ios::out | ios::trunc);
                f1.close();
                f1.open("temprary.txt", ios::out | ios::binary | ios::in | ios::ate);
                f1.clear();
                f1.seekp(0, ios::end);
                while (true)
                {
                    c.getdata();
                    if (c.tempItem == "No" || c.tempItem == "no" || c.tempItem == "NO")
                    {
                        f1.clear();
                        break;
                    }
                    f1.write((char *)&c, sizeof(c));
                }
                cout << "\nEnter discount: ";
                cin >> disc;
                cin.ignore();
                f1.seekg(0, ios::beg);
                f1.read((char *)&c, sizeof(c));
                while (!f1.eof())
                {
                    file.seekg(0, ios::beg);
                    file.clear();
                    file.read((char *)&cus, sizeof(cus));
                    while (!file.eof())
                    {
                        if (c.tempItem == cus.item)
                        {
                            if (x == 0)
                            {
                                fstream file2(filename2);
                                cout << "\n\n"
                                     << setw(52) << setfill('_') << "" << endl;
                                string tp;
                                getline(file2, tp);
                                cout <<setfill(' ')<<setw(30)<< tp;
                                cout << endl
                                     << setw(52) << setfill('_') << "";
                                cout << "\n\n"
                                     << setfill(' ') << "S. no." << setw(15) << "Item" << setw(10) << "price" << setw(10) << "quantity" << setw(10) << "Value" << endl <<setw(52)<<setfill('-')<<""<<setfill(' ')<<endl;
                            }
                            cout << x + 1 << "     " << setw(15) << c.tempItem << setw(10) << cus.price << setw(10) << c.quat << setw(10) << c.quat * cus.price << endl;
                            total = total + cus.price * c.quat;
                            x++;
                            break;
                        }
                        file.read((char *)&cus, sizeof(cus));
                    }
                    f1.read((char *)&c, sizeof(c));
                }
                f1.close();
                cout<<setw(52)<<setfill('-')<<""<<setfill(' ');
                cout << "\nTotal:" <<setw(45)<< total << "\nDiscout:" <<setw(43) << disc << "\nNet Amount:" <<setw(40) << ((total / 100) * (100 - disc));
                cout << "\n\nThank you for shopping \nHave a nice day\nPress any key...";
                getchar();
                break;
            }
        }
        case 2:
            file.seekp(0, ios::end);
            file.clear();
            for (;;)
            {
                cus.storeddata();
                if (cus.item == "no" || cus.item == "No" || cus.item == "NO")
                    break;
                file.write((char *)&cus, sizeof(cus));
            }
            break;

        case 5:
        {
            cout << "\033[2J\033[1;1H";
            cus.Shop();
            cout << "\nShop name changed successfully!\nPress any key...";
            getchar();
            break;
        }
        case 4:
        {
            cout << "\033[2J\033[1;1H";
            cus.erase();
            cout << "\nAll items deleted successfully\nPress any key...";
            getchar();
            break;
        }
        case 6:
        {
            cout << "\033[2J\033[1;1H";
            int t=0;
            file.clear();
            file.seekg(0, ios::beg);
            file.read((char *)&cus, sizeof(cus));
            while (!file.eof())
            {
                if(t==0)
                {
                    cout << setw(52) << setfill('-') << "";
                    cout << "\n" << setfill(' ') << "S. no." << setw(15) << "Item" << setw(10) << "price" << endl <<setw(52)<<setfill('-')<<""<<setfill(' ')<<endl;
                }
                cout << t + 1 << "     " << setw(15) << cus.item << setw(10) << cus.price << endl;
                t++;       
                file.read((char *)&cus, sizeof(cus));
            }
            cout << "\nPress any key...";
            getchar();
            break;
        }

        case 7:
        {
            exit(0);
        }
        default:
            cout<<"Invalid Input";
            break;
        }
    } while (choice != 7);
    return 0;
}