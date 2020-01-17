//  problem link https://hack.codingblocks.com/practice/p/369/62

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long minNumber=0;
    if(s[0]!='9')
       minNumber=min(s[0]-'0',9-s[0]+'0');
       else
       minNumber=9;
       for(int i=1;i<s.size();i++)
         {
             minNumber=minNumber*10+min(s[i]-'0',9-s[i]+'0');
         }
         cout<<minNumber<<endl;
}
