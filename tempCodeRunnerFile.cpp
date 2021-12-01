#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
       int arr[]={1,3,4,5,6,8,9,6,2,3,4,2,4,5};
       int n = sizeof(arr)/sizeof(arr[0]);
       sort(arr, arr+n, greater<int>());
       cout<<endl;
       for (int i = 0; i < n; i++)
       {
              cout<<arr[i]<<" ";
       }
       
       return 0;
}