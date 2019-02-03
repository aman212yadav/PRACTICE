// problem link  https://hack.codingblocks.com/practice/p/406/398



#include<iostream>
using namespace std;
char arr[1001][1001];
int brr[1001][1001]={0};
bool ratInMaze(int i,int j,int ex,int ey){
  if(i>ex || j>ey || i<0 ||j<0 || arr[i][j]=='X')
     return false;
  if(i==ex && j==ey){
    
    brr[i][j]=1;
    for(i=0;i<=ex;i++)
      {
        for(j=0;j<=ey;j++)
           cout<<brr[i][j]<<" ";
      cout<<endl;
        
      }
      return true;
  }
   brr[i][j]=1;
  if(ratInMaze(i,j+1,ex,ey))
     {
       return true;
     }
     else if(ratInMaze(i+1,j,ex,ey))
       return true;
      else
      {brr[i][j]=0;
      return false;
      }
  
}
int main() {
  int n,m;
  cin>>n>>m;

  for(int i=0;i<n;i++)
    cin>>arr[i];
    if(!ratInMaze(0,0,n-1,m-1))
     cout<<"-1";
	return 0;
}
