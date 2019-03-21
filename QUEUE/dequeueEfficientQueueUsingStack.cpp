// problem link   https://hack.codingblocks.com/contests/c/199/397


#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
public:
    stack<T> st1,st2;
    void push(T i){
      while(!st1.empty())
      {
          st2.push(st1.top());
          st1.pop();
      }
      st1.push(i);
      while(!st2.empty()){
        st1.push(st2.top());
        st2.pop();

      }
    }
    T front(){
        T temp=st1.top();
        return temp;
    }
    void pop(){
        if(!st1.empty())
            st1.pop();
    }
    bool empty(){
    return st1.empty();
    }


};
int main(){

Queue<int> q;
int i,n;
cin>>n;
for(i=0;i<n;i++)
  q.push(i);
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();

  }



}
