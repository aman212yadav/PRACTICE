// problem link https://hack.codingblocks.com/practice/p/390/71



#include<bits/stdc++.h>
using namespace std;
void replacePi(char *s,string p){
    if(s[0]=='\0')
       {
           cout<<p<<endl;
           return;
       }
       if(s[1]!='\0' &&(s[0]=='p' && s[1]=='i'))
          replacePi(s+2,p+"3.14");
       else
       replacePi(s+1,p+s[0]);
}
int main() {
    int n;
    cin>>n;
    char s[1001];
  while(n--){
      
      cin>>s;
      replacePi(s,"");
      
  }
	return 0;
}
