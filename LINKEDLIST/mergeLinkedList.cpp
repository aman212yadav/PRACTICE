// problem link https://hack.codingblocks.com/practice/p/402/302




#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int d){data=d;next=NULL;}
};
node * merge(node *root1,node *root2){
   if(root1==NULL)
       return root2;
    else if(root2==NULL)
        return root1;
    else if( root1->data > root2->data){
         node *sma=merge(root1,root2->next);
           root2->next=sma;
            return root2;
            }
     else{
       node *sma=merge(root1->next,root2);
           root1->next=sma;
          return root1;
       }

}
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
int main(){
int n1,n2;

   cin>>n1;
   cin>>n2;
   node *root1=getList(n1);
   
   node *root2=getList(n2);
  node *root3=merge(root1,root2);
  printList(root3);
 

}
