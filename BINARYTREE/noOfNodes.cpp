// program to get No of nodes of a binary treee


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
int getNoOfNodes(node *root){
   if(root==NULL)
      return 0;
      int left=getNoOfNodes(root->left);
      int right=getNoOfNodes(root->right);
      return 1+left+right;
}
int main(){

node *root=buildTree();
cout<<getNoOfNodes(root)<<endl;


}
