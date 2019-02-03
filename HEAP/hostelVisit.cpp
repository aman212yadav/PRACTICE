//problem link  https://hack.codingblocks.com/practice/p/378/1629


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long q,k,a,b,ch;
    cin>>q>>k;
    priority_queue<long long > pq ;
    while(q--){
        cin>>ch;
        if(ch==1)
          {cin>>a>>b;
          
          if((int)pq.size()<k)
            pq.push(a*a+b*b);
            else if((int)pq.size()==k && a*a+b*b < pq.top()){
                pq.pop();
                pq.push(a*a+b*b);
            }
          }
          else
            {
                cout<<pq.top()<<endl;
                
            }
        
    }
    
}
