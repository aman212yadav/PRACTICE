//given array of size n and a target value print all pairs whose sum is equal to target value in O(n) time complexity

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n,target,i,j;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cin>>target;
 sort(arr,arr+n);
 int left=0,right=n-1;
 while(left < right)
  {
    if(arr[left]+arr[right]==target)
      {cout<<arr[left]<<" and "<<arr[right]<<endl;
        left++;}
        else if(arr[left]+arr[right]<target)
          left++;
          else
          right--;
  }
	return 0;
}
