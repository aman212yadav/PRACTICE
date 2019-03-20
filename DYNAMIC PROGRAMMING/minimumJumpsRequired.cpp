//problem Link  https://hack.codingblocks.com/practice/p/346/1269


#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,i,j;
cin>>t;
while(t--){

    cin>>n;
    int jump[n],minJump[n];
    for(i=0;i<n;i++)cin>>jump[i];
    for(i=0;i<n;i++)minJump[i]=INT_MAX;
    minJump[0]=0;
    for(i=0;i<n;i++){

        for(j=i+1;j<=min(n-1,i+jump[i]);j++){
            minJump[j]=min(minJump[j],1+minJump[i]);
        }
    }
    cout<<minJump[n-1]<<endl;

}


}
