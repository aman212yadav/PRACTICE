// problem Link https://hack.codingblocks.com/practice/p/402/313


#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int d;
  node *next;
  node(int d){
  this->d=d;
  next=NULL;
  }
};
node *getList(int n){
   int data;
   node *root=NULL,*temp;
   while(n--){
    cin>>data;
    if(root==NULL)
      {root=new node(data);
       temp=root;
      }
      else{
      temp->next=new node(data);
      temp=temp->next;
      }

   }
   return root;

}
void printList(node *root){
 while(root!=NULL)
 {cout<<root->d<<" ";
  root=root->next;}
}
node *reversei(node *root){
     if(root==NULL || root->next==NULL)
        return root;
        node *prev=NULL,*cur=root,*temp;
        while(cur!=NULL)
        {temp=cur->next;
         cur->next=prev;
         prev=cur;
         cur=temp;
        }
    return prev;
}
bool checkPalindrome(node *root,int n){
       if(root==NULL || root->next==NULL)
       return NULL;
       node *slow=root,*fast=root;
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       if(n%2)
         slow=slow->next;

       node *rev=reversei(slow);
       while(rev!=NULL){
         if(rev->d!=root->d)
            return false;
            rev=rev->next;
            root=root->next;

       }
       return true;
}
int main(){
int n;
cin>>n;
node *root=getList(n);
//printList(root);
if(checkPalindrome(root,n))
   {cout<<"True\n";
   }
   else
   cout<<"False\n";


}
