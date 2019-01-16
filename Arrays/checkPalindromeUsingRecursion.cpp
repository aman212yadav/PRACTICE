//check whether given array is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int *arr,int n,int i,queue<int> &q)
   {
     if(i==n)
       return true;
       q.push(arr[i]);
     if(isPalindrome(arr,n,i+1,q))
         {
           if(q.empty()||q.front()==arr[i])
              {
                q.pop();
                return true;
              }
         }
         return false;

   }
int main() {
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)cin>>arr[i];
  queue<int> q;
  if(isPalindrome(arr,n,0,q))
     cout<<"true\n";
     else
     cout<<"false\n";
	return 0;
}
