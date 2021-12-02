#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
    int q, n;
    bool isPrime(int);
    cin >> q;
    while (q--)
    {
        int count = 1, k = 0;
        cin >> n;
        if (n == 0 || n == 1)
        {
            k = 0;
        }
        else
        {
            for (int i = 2; i <= n ; i++)
            {
                if (isPrime(i)==true)
                {
                    count *= i;
                    /* code */
                if (count <= n)
                {
                    k++;
                }
                else
                    break;
                }
            }
        }
        cout << k<<endl;
    }
    return 0;
}