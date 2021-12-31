#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

class cl{
    public:
      string tt, temp;
      float price;
      void getdata();
      void storedata();
};

void cl::getdata(){
    cout<<"\nEnter element: ";
    getline(cin, tt);
    cout<<"\nEnter price: ";
}

void cl::storedata(){
    cout<<"\nEnter the data: ";
    getline(cin, temp)
}

const char *filename = "temprary.txt";

bool isEmpty(ifstream& pfile){
    return pfile.peek() == ifstream::traits_type::eof();
}

int main()
{
    cout<<setw(70)<<setfill('-')<<"";
    cl c;
    fstream f;
    f.open(filename,ios::in | ios::out | ios::binary);
    f.clear();
    f.seekp(0,ios::end);
    c.getdata();
    f.write((char *)&c, sizeof(c));
    f.clear();
    c.getdata();
    f.write((char *)&c, sizeof(c));
    f.clear();
    c.storedata();
    f.close();

    return 0;
}