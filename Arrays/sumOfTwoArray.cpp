// problem link https://hack.codingblocks.com/contests/c/587/217
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>m;
    int brr[m];
    for(i=0;i<m;i++)
    cin>>brr[i];
    i=n-1;j=m-1;
    stack<int> stk;
    int carry=0;
    while(i>=0 &&  j>=0)
     {
         stk.push((arr[i]+brr[j]+carry)%10);
         carry=(arr[i]+brr[j]+carry)/10;
         i--;
         j--;
     }
     while(i>=0)
       {
           stk.push(arr[i]+carry);
           carry=(arr[i]+carry)%10;
           i--;
       }
       while(j>=0)
       {
           stk.push((brr[j]+carry)%10);
           carry=(brr[j]+carry)/10;
           j--;
       }
       if(carry)
        stk.push(carry);
        while(!stk.empty()){
            cout<<stk.top()<<", ";
            stk.pop();
        }
        cout<<"END";

}
