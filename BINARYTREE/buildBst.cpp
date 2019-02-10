// problem link  https://hack.codingblocks.com/practice/p/355/1277   




#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int d;
  node *left;
  node *right;
  node(int n){
   d=n;
   left=NULL;
   right=NULL;
  }
};

void preOrder(node *root){
  if(root==NULL)
    return ;
  cout<<root->d<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
node * buildBst(int *arr,int s,int e){
   if(s>e)
    return NULL;
   if(s==e)
    return new node(arr[s]);
    int m=(s+e)/2;
    node *root=new node(arr[m]);
    root->left=buildBst(arr,s,m-1);
    root->right=buildBst(arr,m+1,e);
    return root;

}
int main(){

 int t,n,i;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
         cin>>arr[i];
    node *root=buildBst(arr,0,n-1);
    preOrder(root);
    cout<<endl;

  }


}

