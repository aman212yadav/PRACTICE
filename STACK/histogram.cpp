// problem link https://hack.codingblocks.com/practice/p/383/338




#include<bits/stdc++.h>
using namespace std;
long long maxAreaHistogram(long long  n,long long *arr){
  long long i=0,maxArea=0;
  stack<long long> stk;
    while(i<n){
            if(stk.empty() || arr[stk.top()]<=arr[i])
               stk.push(i++);
             else{
                    long long top=stk.top();
                    stk.pop();
                    if(stk.empty())
                    {
                        maxArea=max(maxArea,arr[top]*(i));
                    }
                    else{
                        maxArea=max(maxArea,arr[top]*(i-stk.top()-1));
                    }

             } }
             while(!stk.empty()){
                long long top=stk.top();
                stk.pop();
                maxArea=max(maxArea,arr[top]*(stk.empty()?i:i-stk.top()-1));
             }
             return maxArea;
}
int  main(){
long long n;
cin>>n;
long long arr[n],i;
for(i=0;i<n;i++)
     cin>>arr[i];
cout<<maxAreaHistogram(n,arr)<<endl;


}



