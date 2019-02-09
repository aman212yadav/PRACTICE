// https://hack.codingblocks.com/practice/p/343/391



#include<bits/stdc++.h>
using namespace std;
bool safe(int arr[][9],int i,int j,int num,int n){
    for(int k=0;k<n;k++)
      if(arr[k][j]==num)
      return false;
    for(int k=0;k<n;k++)
      if(arr[i][k]==num)
      return false;
        
    int s=sqrt(n);
    int rx=(i/s)*s;
    int ry=(j/s)*s;
    for(int x=rx;x<rx+s;x++)
    {
      for(int y=ry;y<ry+s;y++)
        if(arr[x][y]==num)
          return false;
    }
    return true;
  
}
bool solveSudoku(int arr[][9],int i,int j,int n){
  if(i==n){
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return true;
    
  }
  
  if(j==n)
  return solveSudoku(arr,i+1,0,n);
  if(arr[i][j]!=0)
  return solveSudoku(arr,i,j+1,n);
  
  for(int k=1;k<=9;k++)
  {
    if(safe(arr,i,j,k,n))
      {
        arr[i][j]=k;
        if(solveSudoku(arr,i,j+1,n))
           return true;
           arr[i][j]=0;
      }
  }
  return false;
  
}
int main() {
  int n,i,j;
  cin>>n;
  int arr[9][9];
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
     cin>>arr[i][j];
     solveSudoku(arr,0,0,n);
	return 0;
}
