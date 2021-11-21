#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fileInput;
    int offset;
    string line;
    char *search = "a"; // test variable to search in file
    // open file to search
    fileInput.open(cfilename.c_str());
    if (fileInput.is_open())
    {
        while (!fileInput.eof())
        {
            getline(fileInput, line);
            if ((offset = line.find(search, 0)) != string::npos)
            {
                cout << "found: " << search << endl;
            }
        }
        fileInput.close();
    }
    else
        cout << "Unable to open file.";
    return 0;
}