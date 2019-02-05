//   bfs print each level in  new line


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

void bfs(node *root){
    if(root){
        queue< node * > q;
        q.push(root);
        while(!q.empty()){
                node *p=q.front();
              q.pop();
            cout<<p->d<<" , ";
            if( p->left )
                q.push(p->left);
                if(p->right)
                    q.push(p->right);

        }


    }
}
int main(){

node *root=buildTree();
bfs(root);

}
