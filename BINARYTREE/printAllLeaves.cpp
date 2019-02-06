// problem link https://hack.codingblocks.com/practice/p/355/142



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
   int d,d1,d2;
   cin>>d;
   if(d==-1)
   {
       return NULL;
   }
   node *root=new node(d);
   queue< node *> q;
   q.push(root);
   while(!q.empty()){
    node *temp=q.front();
    q.pop();
    cin>>d1;
    cin>>d2;
    if(d1==-1)
        temp->left=NULL;
     else
        {temp->left=new node(d1);
          q.push(temp->left);
        }
     if(d2==-1)
        temp->right=NULL;
     else
        {temp->right=new node(d2);
          q.push(temp->right);
        }

   }
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
void printLeaf(node *root){
  if(root==NULL)
     return;
     if(!(root->left)&&!(root->right))
     {
         cout<<root->d<<" ";
         return;
     }
     printLeaf(root->left);
     printLeaf(root->right);

}
int main(){

node *root=buildTree();
printLeaf(root);

}
