// problem link  https://hack.codingblocks.com/practice/p/370/501


#include<bits/stdc++.h>
using namespace std;
int main(){

  int q,a,c;
  stack<int> stk;
  cin>>q;
  while(q--){
    cin>>a;
    if(a==1){
      ((stk.empty()==true)?cout<<"No Code": cout<<stk.top());cout<<endl;
      if(!stk.empty())
        stk.pop();
    }else{
      cin>>c;
      stk.push(c);
    }

  }

}
