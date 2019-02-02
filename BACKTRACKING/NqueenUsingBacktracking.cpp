// N queen problem 


#include<bits/stdc++.h>
using namespace std;
int arr[100][100]={0};
bool safe(int n,int i,int j){
    for(int k=i;k>=0;k--)
       if(arr[k][j]==1)
          return false;
    int x=i,y=j;
     while(x>=0 && y>=0)
    {
        if(arr[x][y]==1)
          return false;
          x--,y--;
    }
    x=i-1,y=j+1;
    while(x>=0 && y<n){
        if(arr[x][y]==1)
          return false;
          x--,y++;
    }
    return true;
}
bool printPlacedQueens(int n,int i){
    if(i==n){
         for(int k=0;k<n;k++){
          for(int j=0;j<n;j++)
             cout<<arr[k][j]<<" ";
          cout<<"\n";
         }
         return true;
    }
    for(int j=0;j<n;j++){
        if(safe(n,i,j))
        {
            arr[i][j]=1;
            if(printPlacedQueens(n,i+1))
                return true;
                arr[i][j]=0;
        }
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    printPlacedQueens(n,0);
    
    
}
