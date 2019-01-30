//problem link  https://hack.codingblocks.com/practice/p/390/72

#include<bits/stdc++.h>
using namespace std;
void tower(int p,char src,char dest,char hel){
    if(p==0)
       return ;
       tower(p-1,src,hel,dest);
       cout<<"Moving ring "<<p<<" from "<<src<<" to "<<dest<<endl;
       tower(p-1,hel,dest,src);
}
int main(){
    
    long long n;
    cin>>n;
    tower(n,'A','B','C');
    
    
}
