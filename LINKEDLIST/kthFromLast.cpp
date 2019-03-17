// problem Link https://hack.codingblocks.com/practice/p/402/469



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
node * getList(){
      int d;
     node *head=NULL;
    cin>>d;
  while(d!=-1)
     {
      insertLast(head,d);
     cin>>d;
     }
  return head;

}
void printList(node *root){
   while(root!=NULL)
     {cout<<root->data<<" ";
       root=root->next;
     }
}
int getKthFromEnd(node *root,int k){
    node *slow=root,*fast=root;
    int kk=1;
    while(kk<=k)
     {fast=fast->next;
       kk++;
     }
     while(fast!=NULL)
     {
      slow=slow->next;
     fast=fast->next;
     }
   return slow->data;

}
int main(){
   int k;
   node *root1=getList();
  cin>>k;
  cout<<getKthFromEnd(root1,k)<<endl;

 }

