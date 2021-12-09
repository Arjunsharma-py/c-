#include<bits/stdc++.h>

using namespace std;

int a[5][5];

int hourglassSum(int i, int j)
{
    return a[0+i][0+j] + a[0+i][1+j] + a[0+i][2+j] + a[1+i][1+j] + a[2+i][0+j] + a[2+i][1+j] + a[2+i][2+j];
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>a[i][j];
        }1638465219727
    }
    int sum = 0;
    int count=0;
    for (int k = 0; k < 4; k++)
    {
        for (int m = 0; m < 4; m++)
        {
            sum=hourglassSum(k,m);
            cout<<sum<<endl;
            if (k==0 && m==0)
            {
                count = sum;
            }
            else if(count<=sum)
            {
                count = sum;
            }
        }
    }
    cout<<count;
    return 0;
}