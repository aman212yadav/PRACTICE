// problem link  https://hack.codingblocks.com/practice/p/370/404

#include<bits/stdc++.h>
using namespace std;
int main(){
long n;
cin>>n;
int arr[n];
cout<<1<<" ";
stack<int> stk;
stk.push(0);
cin>>arr[0];
for(int i=1;i<n;i++)
    {cin>>arr[i];
     while(!stk.empty() && arr[stk.top()]<=arr[i] )
     {

         stk.pop();
     }
     stk.empty()?(cout<<i+1):cout<<(i-stk.top());
     cout<<" ";
     stk.push(i);
    }
    cout<<"END\n";
}
