#include <bits/stdc++.h>

using namespace std;

int handshake(int n){
    if(n<2){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else {
        return ((n-1)+handshake(n-1));
    }
}

int main()
{
    int t, n, handshake(int);
    cin>>t;
    while (t--) {
        cin>>n;
        cout<<handshake(n)<<endl;
    }
    return 0;
}