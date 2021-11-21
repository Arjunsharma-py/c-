#include <iostream>
using namespace std;

int main()
{
    char a[10] = {"arjunshar"};
    char b[10]={0};
    int test = 1;
    int arr = 0, arr1 = 0;
    cout << "Enter";
    cin >> b;
    // cout<<sizeof(a);
    
    for (int j = 0; j < 10; j++)
    {
        /* code */
        if(a[j] != '\0')
        {
            arr++;
        }
    }

    for (int j = 0; j < 10; j++)
    {
        /* code */
        if(b[j] != '\0')
        {
            arr1++;
        }
    }
    cout<<" \n"<<arr<<" \n";
    cout<<" \n"<<arr1<<" \n";
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<" "<<a[i];
    }
    
    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     test = 2;
    //     if (a[i] != b[i])
    //     {
    //         /* code */
    //         test = 3;
    //         break;
    //     }
    // }
    // cout<<test;
    return 0;
}