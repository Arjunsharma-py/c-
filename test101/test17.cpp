#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string Searching(string se_id)

{

    // cout << "\t\t\t\tSearching the Record" << endl;

    int offset;
    string line;
    ifstream filee;
    filee.open("UserName.txt");
    // cout << "\nType id of student you want to search:";
    // cin >> se_id;
    if (filee.is_open())
    {

        while (!filee.eof())
        {
            getline(filee, line);
            if ((offset = line.find(se_id, 0)) != string::npos)
            {
                // cout << "\nId ::" << se_id;
                cout<<"y";
                return 0;
                break;
            }
        }
        filee.close();
    }
    else
    {
        cout<<"n";
        return 0;
    }
}