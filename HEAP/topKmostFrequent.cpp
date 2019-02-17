//problem link  https://hack.codingblocks.com/practice/p/378/1275



#include<bits/stdc++.h>
using namespace std;
void printTopK(int *arr,int n,int k){
   unordered_map<int,int> freq;
   vector<int> top(k+1);
   for(int r=0;r<n;r++){
    freq[arr[r]]++;
    top[k]=arr[r];
    auto it=find(top.begin(),top.end()-1,arr[r]);
    for(int i=it-top.begin()-1;i>=0;i--)
    {   
        if(freq[top[i]]<freq[top[i+1]])
            swap(top[i],top[i+1]);
        else if(freq[top[i]]==freq[top[i+1]] && (top[i]>top[i+1]))
            {  
                swap(top[i],top[i+1]);
            }
        else
            break;

    }
    for(int j=0;j<k&& top[j]!=0;j++)
        cout<<top[j]<<" ";

   }
   cout<<endl;

}
int main(){
int t,n,k;
cin>>t;
while(t--){
    cin>>n>>k;
    int arr[n];
    for( int i=0;i<n;i++)
        cin>>arr[i];
    printTopK(arr,n,k);

}

}
