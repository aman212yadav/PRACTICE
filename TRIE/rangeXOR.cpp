// problem link    https://hack.codingblocks.com/contests/c/471/1562


#include<bits/stdc++.h>
using namespace std;
class trie{
   set<int> indices;
   trie *left;
   trie *right;
   public:
   trie(){
     left=NULL;
     right=NULL;
   }
   void insertt(long long x,long long idx){
         trie *tr;
         tr=this;
        for(int i=31;i>=0;i--){
        int bit=((x>>i)&1);
        if(bit==0){
                 if(tr->left==NULL){
                    tr->left=new trie;
                 }

                 tr=tr->left;
                  tr->indices.insert(idx);
        }else{
           if(tr->right==NULL){
              tr->right=new trie;
           }
           tr=tr->right;
           tr->indices.insert(idx);
        }
        }
        tr->indices.insert(idx);
   }
   bool isThere(int l,int r,set<int> &v){
      auto s=v.lower_bound(l);
      if(s==v.end() || *s>r)
        return false;
      return true;
   }
   long long query(int l,int r,long long x){
       trie *tr;
       tr=this;
       long long ans=0;
   for(int i=31;i>=0;i--){
     if(tr==NULL)
        throw tr;
    int bit=((x>>i)&1);
    if(bit==0){
        if(tr->right!=NULL && isThere(l,r,tr->right->indices)){
            ans=(ans|1<<i);
            tr=tr->right;
        }else{
           tr=tr->left;
        }
    }else{
       if(tr->left!=NULL && isThere(l,r,tr->left->indices)){
        tr=tr->left;
       }else{
          ans=(ans|1<<i);
          tr=tr->right;
       }

    }


   }

   return ans;

   }


};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long q,t,x,l,r,idx;
idx=1;
cin>>q;
trie tr;
while(q--){
   cin>>t;
   if(t){
      cin>>l>>r>>x;
      cout<<tr.query(l,r,x)<<"\n";

   }
   else{
      cin>>x;
      tr.insertt(x,idx);
      idx+=1;

   }

}


}
