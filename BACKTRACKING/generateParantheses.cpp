//  problem link  https://hack.codingblocks.com/practice/p/406/910



#include<iostream>
using namespace std;
void generateParantheses(int a,int b,int n,string output){
  if(a==n && b==n){
    cout<<output<<endl;
    return;
  }
  if(a==b)
    generateParantheses(a+1,b,n,output+'(');
    else if(a>b){
     if(b<n)
      generateParantheses(a,b+1,n,output+')');
      if(a<n)
      generateParantheses(a+1,b,n,output+'(');
      
    }
    else
    return;
}
int main() {
  int n;
  cin>>n;
  generateParantheses(0,0,n,"");
	return 0;
}
