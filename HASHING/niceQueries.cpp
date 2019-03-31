//problem link https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/mandee-and-his-girlfriend-9a96aabd/


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long n,q,a,b;
    cin>>n>>q;
    set<long long> s; 
    while(q--){
        cin>>a>>b;
        if(a==1){
            s.insert(b);
        }
        else{
            auto r=s.lower_bound(b);
            if(r==s.end())
             cout<<"-1\n";
             else
             cout<<*r<<endl;
        }
        
    }
}
