//problem link  https://hack.codingblocks.com/practice/p/380/1665



#include<bits/stdc++.h>
#define mx 300
using namespace std;
string s3="";
bool check(int *a1,int *a2){
    int i;
    for( i=0;i<mx;i++)
   {
       if(a1[i]>a2[i])
          break;
   }
    if(i>=mx)
    return true;
    return false;
}
bool possible(int *a1,string &s2,int l){
   int a2[mx]={0};
   for(int i=0;i<l;i++)
   {

        a2[s2[i]]++;
   }

  if(check(a1,a2)){ s3=s2.substr(0,0+l);return true;}
   for(int i=l;i<(int)s2.size();i++){
        a2[s2[i-l]]--;
        a2[s2[i]]++;
     if(check(a1,a2))
        {  s3=s2.substr(i-l+1,l);

            return true;
        }

   }
   return false;

}
int main(){
string s1,s2;
getline(cin,s1);
getline(cin,s2);
int a1[mx]={0};
for(auto k:s2){
        a1[k]++;
}
int mid,s=0,e=(int)s1.size(),ans=0;
while(s<=e){
    mid=(s+e)/2;
    if(possible(a1,s1,mid)){
        ans=mid;
        e=mid-1;
    }else
       s=mid+1;
}
if(ans==0)
      cout<<"No string\n";
else
    cout<<s3<<endl;

}
