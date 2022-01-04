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
    int avail;
    float quat, price;
    string item = "", tempItem = "";
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
        cout << "Enter the stock quantity: ";
        cin >> avail;
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

void customer::erase()
{
    ofstream f;
    f.open("itemlist.txt", ios::out | ios::trunc);
    f.seekp(0, ios::beg);
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
    int choice;
    float total = 0;
    fstream file(filename), file2(filename2);
    if (isEmpty(file2))
        cus.Shop();
    do
    {
        cout << "\033[2J\033[1;1H";
        string tp;
        int temp = 0, temp2 = 0, isfound=0,found=0, disc=0;
        file2.open(filename2, ios::in);
        cout << endl
             << setw(70) << setfill('-') << "" << endl;
        getline(file2, tp);
        cout << setfill(' ') << setw(35+((sizeof(tp)/2))) << tp;
        cout << endl
             << setw(70) << setfill('-') << "" << setfill(' ');
        file2.close();
        file.clear();
        file.seekg(0, ios::beg);
        file.read((char *)&cus, sizeof(cus));
        while (!file.eof())
        {
            found=1;
            if(temp2==0)
            {
                cout<<"\nStatus:-\n";
            }
            if(cus.avail<=0)
            {
                cout<<cus.item<<": Out of stock\n";
                isfound=1;
            }
            else if (cus.avail<=3 && cus.avail>0)
            {
                cout<<cus.item<<": only "<<cus.avail<<" left\n";
                isfound=1;
            }
            file.read((char *)&cus, sizeof(cus));
            temp2++;
        }
        if(isfound==0 && found==1)
            cout<<"All items are available\n";
        file.clear();
        cout << "\n\n*******Menu********";
        cout << endl
             << "Enter your option";
        cout << endl
             << "1 => Create bills";
        cout << endl
             << "2 => Load details of items";
        cout << endl
             << "3 => Update item details";
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
            total=0;
            file.open(filename, ios::in | ios::out);
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
                    temp = 0;
                    file.seekg(0, ios::beg);
                    file.clear();
                    file.read((char *)&cus, sizeof(cus));
                    while (!file.eof())
                    {
                        temp++;
                        if (c.tempItem == cus.item)
                        {
                            if (x == 0)
                            {
                                fstream file2(filename2);
                                cout << "\n\n"
                                     << setw(52) << setfill('_') << "" << endl;
                                string tp;
                                getline(file2, tp);
                                cout << setfill(' ') << setw(26+((sizeof(tp)/2))) << tp;
                                cout << endl
                                     << setw(52) << setfill('_') << "";
                                cout << "\n\n"
                                     << setfill(' ') << "S. no." << setw(15) << "Item" << setw(10) << "price" << setw(10) << "quantity" << setw(10) << "Value" << endl
                                     << setw(52) << setfill('-') << "" << setfill(' ') << endl;
                            }
                            cout << x + 1 << "     " << setw(15) << c.tempItem << setw(10) << cus.price << setw(10) << c.quat << setw(10) << c.quat * cus.price << endl;
                            total = total + cus.price * c.quat;
                            x++;
                            fstream f;
                            f.open(filename, ios::in | ios::out);
                            f.clear();
                            int location = (temp - 1) * sizeof(cus);
                            f.seekp(location, ios::beg);
                            f.read((char *)&cus, sizeof(cus));
                            f.seekp(location, ios::beg);
                            cus.avail = cus.avail - c.quat;
                            f.write((char *)&cus, sizeof(cus));
                            f.seekp(location, ios::beg);
                            f.clear();
                            f.close();
                            break;
                        }
                        file.read((char *)&cus, sizeof(cus));
                    }
                    f1.read((char *)&c, sizeof(c));
                }
                f1.close();
                cout << setw(52) << setfill('-') << "" << setfill(' ');
                cout << "\nTotal:" << setw(45) << total << "\nDiscout:" << setw(43) << disc << "\nNet Amount:" << setw(40) << ((total / 100) * (100 - disc));
                cout << "\n\n"<<setw(37)<<"Thank you for visiting"<<"\n\n"<<setw(32)<<"Have a nice day\nPress any key...";
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
            int t = 0;
            file.clear();
            file.seekg(0, ios::beg);
            file.read((char *)&cus, sizeof(cus));
            while (!file.eof())
            {
                if (t == 0)
                {
                    cout << setw(52) << setfill('-') << "";
                    cout << "\n"
                         << setfill(' ') << "S. no." << setw(15) << "Item" << setw(10) << "price" << setw(15) << "Availability" << endl
                         << setw(52) << setfill('-') << "" << setfill(' ') << endl;
                }
                cout << t + 1 << "     " << setw(15) << cus.item << setw(10) << cus.price << setw(15) << cus.avail << endl;
                t++;
                file.read((char *)&cus, sizeof(cus));
            }
            cout << "\nPress any key...";
            getchar();
            break;
        }

        case 3:
        {
            fstream f;
            int record;
            cout << "Enter the S. no.: ";
            cin >> record;
            f.open(filename, ios::in | ios::out);
            f.clear();
            int location = (record - 1) * sizeof(cus);
            f.seekp(location, ios::beg);
            f.read((char *)&cus, sizeof(cus));
            f.seekp(location, ios::beg);
            cout << "Enter new stock: ";
            cin >> cus.avail;
            f.write((char *)&cus, sizeof(cus));
            f.seekp(location, ios::beg);
            f.clear();
            f.close();
            cin.ignore();
            cout << "Press any key!";
            getchar();
            break;
        }
        case 7:
        {
            exit(0);
        }
        default:
            cout << "Invalid Input";
            break;
        }
    } while (choice != 7);
    return 0;
}