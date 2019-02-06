// program to get sum of nodes


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

int getSumOfNodes(node *root){
  if(root==NULL)
      return 0;
    int sumLeft=getSumOfNodes(root->left);
    int sumRight=getSumOfNodes(root->right);
    return root->d+sumLeft+sumRight;
}
int main(){

node *root=buildTree();
cout<<getSumOfNodes(root)<<endl;


}
