//given two binary tree check if both are structurewise same or not


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
node * insertInBst(node *root ,int data){
   if(root==NULL)
     return new node(data);
    if(data<= root->d)
        root->left=insertInBst(root->left,data);
    else
        root->right=insertInBst(root->right,data);
    return root;
}

/*node * buildTree(){
 int d;
 node *root=NULL;
 cin>>d;
 while(d!=-1){
    root=insertInBst(root,d);
    cin>>d;
 }
 return root;

}*/
node * buildTree(){
      int d;
      cin>>d;

      node *root=new node(d);
      string b;
      cin>>b;
      if(b=="true")
        root->left=buildTree();
        else
            root->left=NULL;

      cin>>b;
       if(b=="true")
        root->right=buildTree();
        else
            root->right=NULL;

      return root;
}
bool areEqual(node *root1,node *root2){
  if(root1==NULL && root2==NULL)
      return true;
  if(root1==NULL && root2!=NULL || root1!=NULL && root2==NULL)
    return false;
  return areEqual(root1->left,root2->left)&&areEqual(root1->right,root2->right);
}
void preOrder(node *root){
  if(root==NULL)
    return ;
  cout<<root->d<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
int main(){

node *root1=buildTree();
//preOrder(root1);
node *root2=buildTree();
if(areEqual(root1,root2))
    cout<<"true";
else
    cout<<"false";

}
