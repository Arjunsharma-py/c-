#include<iostream>
#include<string>

using namespace std;

bool isInterleave(string s1, string s2, string s3) {
        int flag = 0,temp=s1.length();
        if(((s1.length()==s2.length()) || (s1.length()==(s2.length()+1)) || (s1.length()==(s2.length()-1))) && ((s1.length()+s2.length())==s3.length()))
        {
             for (int i=0;i<s3.length();i++)
             {
                 flag=0;
                 if(i<=temp)
                 {
                 for (int j=0;j<s1.length();j++)
                 {
                     if (s3[i]==s1[j])
                     {
                         s3.erase(s3.begin()+i);
                         s1.erase(s1.begin()+j);
                         break;
                     }
                 }
                 }
                 if(i>temp)
                 {
                     for (int j=0;j<s2.length();j++)
                     {
                         if(s3[i]==s2[j])
                         {
                             s3.erase(s3.begin()+i);
                             s2.erase(s2.begin()+j);
                             break;
                         }
                     }
                 }
             }
            if(s1.empty() && s2.empty() && s3.empty())
                return true;
            else
                return false;
        }
        else
            return false;
    }

int main()
{
    bool isInterleave(string,string,string);
    string s1,s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    cout<<isInterleave(s1,s2,s3);
    return 0;    
}