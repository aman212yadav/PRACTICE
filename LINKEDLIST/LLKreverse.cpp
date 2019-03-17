// problem link  https://hack.codingblocks.com/practice/p/406/398
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
node* reverseK(node * root,int k){
      if(root==NULL)
          return root;
      node *temp=root,*prev;
      int kk=1;
      while(kk<k){
      temp=temp->next;
      kk++;
      }
      
      prev=reverseK(temp->next,k);
     temp->next=NULL;
     while(root!=NULL){
        temp=root->next;
        root->next=prev;
        prev=root;
        root=temp;
     }
     return prev;





}
int main(){
   int n,k;
   cin>>n>>k;
   node *root1=getList(n);
   node *root=reverseK(root1,k);
   printList(root);

 }

