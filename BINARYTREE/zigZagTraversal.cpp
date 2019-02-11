// print level order of binary tree in zig zag pattern



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
int main(){

node *root1=buildTree();
stack< node *> s1;
stack< node *> s2;
s1.push(root1);
while(!s1.empty() || !s2.empty()){
    while(!s1.empty())
    {
        cout<<s1.top()->d<<" ";
        if(s1.top()->left!=NULL)
            s2.push(s1.top()->left);
        if(s1.top()->right!=NULL)
            s2.push(s1.top()->right);
            s1.pop();

    }
    while(!s2.empty())
    {
        cout<<s2.top()->d<<" ";
        if(s2.top()->right!=NULL)
            s1.push(s2.top()->right);
        if(s2.top()->left!=NULL)
            s1.push(s2.top()->left);

            s2.pop();

    }


}


}
