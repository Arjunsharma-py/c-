#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

class cl{
    public:
      string tt="", temp;
      float price;
      void getdata();
      void storedata();
};

void cl::getdata(){
    cout<<"\nEnter element: ";
    getline(cin, tt);
    cout<<"\nEnter price: ";
    cin>>price;
    cin.ignore();
}

void cl::storedata(){
    cout<<"\nEnter the data: ";
    getline(cin, temp);
}

const char *filename = "hi.txt";

bool isEmpty(ifstream& pfile){
    return pfile.peek() == ifstream::traits_type::eof();
}

void clr(){
    cout << "\033[2J\033[1;1H";
}

int main()
{
    cl c;
    
    ifstream file(filename);
    fstream file2(filename);
    // file2.seekp(0, ios::end);
    // c.getdata(); 
    // file2.write((char *)&c, sizeof(c));
    file.clear();
    file.open(filename,ios::out | ios::in | ios::trunc);
    if(c.tt=="")
        cout<<"Empty";
    else
        cout<<"not empty";
    cout<<c.tt;
    file.close();
    clr();
    return 0;
}