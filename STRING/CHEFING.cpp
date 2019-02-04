//problem link https://www.codechef.com/FEB19B/problems/CHEFING/


#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t,i,n,k;
    cin>>t;
    while(t--){
        cin>>n;
           string arr[n];
        for(i=0;i<n;i++)
          {
            cin>>arr[i];  
          }
          int co=0;
          for(i=0;i<26;i++){
              int b=0;
          for(int j=0;j<n;j++)
            {
              for(auto r:arr[j])
                  if(r=='a'+i)
                  {
                      b++;
                      break;
                  }
            }
            co+=(b==n);
            
          }
          cout<<co<<"\n";
        
    }
    
}
