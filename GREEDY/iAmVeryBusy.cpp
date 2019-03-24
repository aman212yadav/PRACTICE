// problem link  https://www.spoj.com/problems/BUSYMAN/



#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,n,m,i;
cin>>t;
while(t--){

    cin>>n;
    pair<int,int> arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i].second>>arr[i].first;
    }
    sort(arr,arr+n);
    int co=1,fi=arr[0].first;

    for(i=1;i<n;i++)
    {  if(arr[i].second>=fi){
           fi=arr[i].first;
           co++;
    }

    }
    cout<<co<<endl;

}

}
