//problem link    https://hack.codingblocks.com/practice/p/406/398


#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int d){data=d;next=NULL;}
};
void insertLast(node *&head,int d){
          if(head==NULL)
           { head=new node(d);
             return;}
           node *temp=head;
           while(temp->next!=NULL)
             temp=temp->next;
           temp->next=new node(d);
}
node * getList(int n1){
      int d;
     node *head=NULL,*temp;
  while(n1>0)
     {cin>>d;
      insertLast(head,d);
      n1--;
     }
  return head;

}
void printList(node *root){
   while(root!=NULL)
     {cout<<root->data<<" ";
       root=root->next;
     }
}
int printIntersecting(node *root1,int n,node *root2,int m){
  node *prev=NULL;
  while(root1!=NULL && root2!=NULL){
      if(n>m)
        {root1=root1->next;n--;prev=NULL;}
     else if(n<m)
           {root2=root2->next; m--;prev=NULL;}
     else{
            if(root1->data!=root2->data)
              { prev=NULL;
            }
            else if(prev==NULL)
                    prev=root1;

               root1=root1->next;
                root2=root2->next;
        n--;
        m--;
     }

  }
  return prev==NULL?-1:prev->data;

}

int main(){
   int n,m;
   cin>>n;
   node *root1=getList(n);
   cin>>m;
   node *root2=getList(m);
   cout<<printIntersecting(root1,n,root2,m);

 }

