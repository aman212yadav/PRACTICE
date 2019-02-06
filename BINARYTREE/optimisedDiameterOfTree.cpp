// diameter of tree in O(N)



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
int getDiameterOfTree(node *root){
  if(root==NULL)
      return 0;
      int h1=height(root->left);
      int h2=height(root->right);
    int d1=getDiameterOfTree(root->left);
    int d2=getDiameterOfTree(root->right);

    return max(h1+h2,max(d1,d2));
}
pair<int,int> fastDiameter(node *root){
      if(root==NULL)
      return {0,0};
      pair<int,int> left=fastDiameter(root->left);
      pair<int,int> right=fastDiameter(root->right);
      int dia=max(left.first+right.first,max(left.second,right.second));
      int height=1+max(left.first,right.first);
      return {height,dia};
}
int main(){

node *root=buildTree();
cout<<fastDiameter(root).second<<endl;

}
