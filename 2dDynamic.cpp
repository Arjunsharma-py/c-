#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,q_no,x,y,lastanswer=0;
    cin>>n>>q;
    vector<vector<int>> allvec(n,vector <int>());
    for (int i = 0; i < q; i++)
    {
        cin>>q_no>>x>>y;
        lastanswer = 0;
        if(q_no==1)
        {
            allvec[(x^lastanswer)%n].push_back(y);
        }
        else if(q_no==2)
        {
            lastanswer = allvec[(x^lastanswer)%n][y%allvec[(x^lastanswer)].size()];
            cout<<lastanswer<<endl;
        }
    }
    return 0;
}