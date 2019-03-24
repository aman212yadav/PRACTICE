// problem link https://www.spoj.com/problems/BAISED/


#include<bits/stdc++.h>
using namespace std;
int main(){
int t,pos,i,n;
string s;
cin>>t;
while(t--){

     cin>>n;
     int arr[n+1]={0};
     for(i=0;i<n;i++){
        cin>>s>>pos;
        arr[pos]++;
     }
     pos=1;
     long long ans=0;
     for(i=1;i<=n;i++){
        while(arr[i]){
            ans+=abs(pos-i);
            pos++;
            arr[i]--;
        }
     }
     cout<<ans<<endl;

}


}
