// problem link    https://hack.codingblocks.com/practice/p/380/961



#include<bits/stdc++.h>
using namespace std;
class node{
 public:
     int data;
     node *left;
     node *right;
     node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
     }
};
void traverse(map<int,vector<int> > &m,node *root,int dist=0){
     if(root==NULL) return;
     m[dist].push_back(root->data);
     traverse(m,root->left,dist-1);
     traverse(m,root->right,dist+1);
}
int main(){
long long s=1,n;
cin>>n;
cin>>s;
node *root=new node(s);
queue<node *> q;
q.push(root);
while(!q.empty()){
    node *temp=q.front();
    q.pop();
    cin>>s;
    if(s!=-1){ temp->left=new node(s); q.push(temp->left);}
    cin>>s;
    if(s!=-1){temp->right=new node(s);q.push(temp->right);}
}
map<int,vector<int> > m;
traverse(m,root);
for(auto k: m){
    for(auto v: k.second)
        cout<<v<<" ";
    cout<<endl;
}

}
