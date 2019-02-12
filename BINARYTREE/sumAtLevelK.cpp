// problem link   https://hack.codingblocks.com/practice/p/355/141

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int d;
    int c;
   vector<node * > *child;
    node(int n,int c){
        d=n;
        this->c=c;
        child=new vector<node* >(c);
    }
};
node * buildTree(){
    int a,b;
    cin>>a>>b;
    node *root=new node(a,b);
    for(int i=0;i<b;i++){
        (root->child->at(i))=buildTree();
    }
    return root;
}
void printTree(node *root){
    if(root==NULL)
    return ;
    queue< pair<node *,int>  > q;
     int p,sum;
    cin>>p;
    sum=0;
    q.push({root,0});
    while(!q.empty())
    {
        pair<node*,int> k=q.front();
        q.pop();
        //cout<<(k.first)->d<<" "<<(k.first)->c<<" "<<k.second<< "\n";
        
        if(k.second==p)
        sum+=k.first->d;
        for(auto d:*(k.first->child))
           q.push({d,k.second+1});
    }
    cout<<sum<<endl;
    
}
int main(){
    node *root=buildTree();
    printTree(root);
   
    
  
   
    
  
    
}
