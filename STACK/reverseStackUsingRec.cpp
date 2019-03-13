// reverse stack using recursion


#include<bits/stdc++.h>
using namespace std;
void insertBottom(stack<int> &stk,int p){
    if(stk.empty())
      { stk.push(p);
        return;}
      int top=stk.top();
      stk.pop();
      insertBottom(stk,p);
      stk.push(top);
}
void reversestk(stack<int> &stk){
  if(stk.empty())
  return;
  int top=stk.top();
  stk.pop();
  reversestk(stk);
  insertBottom(stk,top);


}
int main() {
  int n,a,i;
   cin>>n;
   stack<int> stk;
   for(i=0;i<n;i++)
    cin>>a,stk.push(a);
    reversestk(stk);
    while(!stk.empty())
    {
      cout<<stk.top()<<endl;
      stk.pop();
    }
	return 0;
}
