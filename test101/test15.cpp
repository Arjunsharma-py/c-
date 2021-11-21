#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class file_control
{
private:
    /* data */
public:
    fstream file;
    string FileName, st;
    void FileOpening(void);
    void FileInput(void);

};


void file_control :: FileOpening()
{
    cout << "Enter file name: ";
    cin >> FileName;
    file.open(FileName);
    file.close();
}

void file_control :: FileInput()
{
    file.open(FileName);
    while (file.eof() == 0)
    {
        /* code */
        getline(file, st);
        cout<<st<<"\n\n\n";
    }
    
    file.close();
}

int main()
{
    file_control f;
    f.FileOpening();
    cout<<"\n\n";
    f.FileInput();
    return 0;
}