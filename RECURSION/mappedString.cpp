// problem link  https://hack.codingblocks.com/practice/p/390/445


#include<iostream>
using namespace std;
char arr[]={'\0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void printString(string s,string output){
   if(s.empty())
     {
       cout<<output<<endl;
       return;
     }
     printString(s.substr(1),output+arr[s[0]-'0']);
     if(s[1]!='\0' && (s[0]-'0')*10+s[1]-'0'<=26){
       printString(s.substr(2),output+arr[(s[0]-'0')*10+s[1]-'0']);
     }
  
}
int main() {
  string s;
  cin>>s;
  printString(s,"");
	return 0;
}
