// delete a given element from BST

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

node * buildTree(){
 int d;
 node *root=NULL;
 cin>>d;
 while(d!=-1){
    root=insertInBst(root,d);
    cin>>d;
 }
 return root;

}
bool searchInBST(node *root,int s){
  if(root==NULL)
      return false;
  if(root->d== s)
    return true;
  if(s <= root->d)
     return searchInBST(root->left,s);
  else
    return searchInBST(root->right,s);
}
node* deleteInBst(node *root,int data){
   if(root==NULL)
      return NULL;
   if(root->d > data){
     root->left=deleteInBst(root->left,data);
   }
   else if(root->d < data)
    root->right=deleteInBst(root->right,data);
   else{
       if(root->left==NULL && root->right==NULL)
       {
           delete root;
           return NULL;
       }
       else if(root->left==NULL && root->right!=NULL)
       {
           node *temp=root->right;
           delete root;
           return temp;
       }
       else if(root->right!=NULL && root->left==NULL){
            node *temp=root->left;
       delete root;
       return temp;
       }
       else{
           node *temp=root->right;
             while(temp->left!=NULL)
                 temp=temp->left;
                 root->d=temp->d;
                 root->right=deleteInBst(root->right,data);

       }

   }
   return root;


}
void inorder(node *root){
   if(root==NULL)
     return;
   inorder(root->left);
   cout<<root->d<<" ";
   inorder(root->right);
}
int main(){

node *root=buildTree();
int data;
cin>>data;
root=deleteInBst(root,data);
inorder(root);


}
