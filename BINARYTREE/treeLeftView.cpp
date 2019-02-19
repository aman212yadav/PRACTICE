// print left view of Binary tree


// given inorder and preorder create binary tree free them


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

node * build(){
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    node *root=new node(d);
    queue< node * > q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cin>>d;
        if(d==-1)
            temp->left=NULL;
        else
            {temp->left=new node(d);
             q.push(temp->left);
            }
         cin>>d;
        if(d==-1)
            temp->right=NULL;
        else
            {temp->right=new node(d);
            q.push(temp->right);
            }
    }
    return root;
}
void preorder(node *root){
  if(root==NULL)
   return ;
   if(root->left==NULL)
     cout<<"END => ";
     else
     cout<<root->left->d<<" => ";
     cout<<root->d<<" <= ";
     if(root->right==NULL)
     cout<<"END\n";
     else
     cout<<root->right->d<<"\n";

     preorder(root->left);
     preorder(root->right);


}
void printLeftView(node *root,int &ma,int h){
  if(root==NULL)
    return ;
    if(ma<h)
        {cout<<root->d<<" ";
         ma=max(ma,h);
        }
     printLeftView(root->left,ma,h+1);
     printLeftView(root->right,ma,h+1);
}
int main(){

node *root=build();
int ma=0;
printLeftView(root,ma,1);

}
