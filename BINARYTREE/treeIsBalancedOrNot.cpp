// find whether given binary tree is balanced or not


#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int d;
  node *left,*right;
  node(int d){
      this->d=d;
      left=NULL;
      right=NULL;
  }
};
node * buildTree(){
   int d;
   cin>>d;
   if(d==-1)
   {
       return NULL;
   }
   node *root=new node(d);
   root->left=buildTree();
   root->right=buildTree();
   return root;

}
int height(node *root){
   if(root==NULL)
       return 0;
   int left=height(root->left);
   int right=height(root->right);
   return 1+max(left,right);
}
pair<int,bool> isBalanced(node *root){
    if(root==NULL)
    return {0,true};
    pair<int,bool> left=isBalanced(root->left);
    pair<int,bool>  right=isBalanced(root->right);
    pair<int,bool> r;
    r.first=1+max(left.first,right.first);
    r.second=false;
    if(abs(left.first-right.first)<=1 && left.second && right.second)
        r.second=true;
        return r;

}
int main(){

node *root=buildTree();
if(isBalanced(root).second)
    cout<<"Yes it is balanced\n";
    else
        cout<<"No it is Not balanced\n";

}
