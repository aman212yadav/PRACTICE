// problem link  https://www.hackerearth.com/practice/algorithms/dynamic-programming/state-space-reduction/practice-problems/algorithm/bytelandian-gold-coins/description/




#include<bits/stdc++.h>
using namespace std;
map<long long,long long > m; 
long long solve(long long n){
    if(n<=1)
      return n;
    if(m[n]!=0)
    return m[n];
    else
    {
        m[n]=max(n,solve(n/2)+solve(n/3)+solve(n/4));
        
        return m[n];
    }
    
}
 
int main()
{    string s;
   while(getline(cin,s)) 
   {   
       long long n=stoi(s);
       m.clear();
       cout<<solve(n)<<endl;
   }
}
