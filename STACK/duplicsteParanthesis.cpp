// problem link https://hack.codingblocks.com/practice/p/370/402


#include<bits/stdc++.h>
using namespace std;
int main(){
string s;

cin>>s;
stack<int> stk;
int to=-1,bo=-1,co=0;
bool b=false;
for(int i=0; i< (int)s.size();i++)
{
    if(s[i]=='(')
        stk.push(i);
        else if(s[i]==')'){
            if(co==1){
                if(i-bo==1 && to-stk.top()==1)
                    b=true;
                else
                {
                    to=stk.top();
                    bo=i;
                    co=1;
                }
            }
            else
                {
                    to=stk.top();
                    bo=i;
                    co=1;
                }
            stk.pop();
        }
}
if(!b)
     cout<<"false\n";
else
    cout<<"true\n";

}
