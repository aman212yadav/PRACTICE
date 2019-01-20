//problem link  https://hack.codingblocks.com/practice/p/369/219


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
   cin>>m>>n;
  int end_row=m-1,end_col=n-1,l=0,k=0,i,j;
 
  int arr[m][n];
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
    cin>>arr[i][j];
  while(l<=end_row && k<=end_col){
    for(j=l;j<=end_row;j++)
     cout<<arr[j][k]<<", ";
     k++;
     for(j=k;j<=end_col;j++){
       cout<<arr[end_row][j]<<", ";
     }
     end_row--;
     if(l<=end_row)
     {for(j=end_row;j>=l;j--){
       cout<<arr[j][end_col]<<", ";
     }
     }
     end_col--;
     if(k<=end_col){
     for(j=end_col;j>=k;j--)
         cout<<arr[l][j]<<", ";
         l++;
     }
     
  }
  cout<<"END";
  
}
