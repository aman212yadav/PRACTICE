//  https://hack.codingblocks.com/practice/p/346/434



#include<bits/stdc++.h>
using namespace std;
int main(){
long  n,i,j;
cin>>n;
long arr[n+1];
for(i=1;i<=n;i++)cin>>arr[i];
i=1;
j=n;
int co=0;
while(i<=j){
        if((j-i)%2)
        {
            co+=max(arr[i],arr[j]);
        }
        if(arr[j]>arr[i])
            j--;
        else
            i++;


}


cout<<co<<endl;

}
