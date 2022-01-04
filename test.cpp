#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

class cl{
    public:
      string tt="", temp;
      float price, quat;
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
    cin>>quat;
    cin.ignore();
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
    fstream file(filename);
    c.storedata();
    
    
    return 0;
}