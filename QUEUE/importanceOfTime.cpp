// problem link https://hack.codingblocks.com/practice/p/405/499

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  queue<int> order,executed;
  int cost=0,temp;
  cin>>n;
  for(int i=0;i<n;i++)
    { cin>>temp;
      order.push(temp);
    }
    for(int i=0;i<n;i++)
    { cin>>temp;
      executed.push(temp);
    }
    while(!executed.empty()){
      temp= order.front();
      order.pop();
        if(executed.front()==temp)
           {
             executed.pop();

           }
           else
           order.push(temp);

           cost++;


    }

    cout<<cost<<endl;




}




