// problem link  https://www.hackerearth.com/practice/data-structures/advanced-data-structures/trie-keyword-tree/practice-problems/algorithm/search-engine-1/



#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    
    node*  child[26];
    char value;
    long long weight;
    node(char value='\0',long long weight=-1){
        this->value=value;
        this->weight=weight;
        for(int i=0;i<26;i++)
           child[i]=NULL;
    }
    
};
class trie{
    node *root;
    public:
    trie(){
        root=new node('\0',-1);
    }
    void insert(string s,long long w){
        node *temp=root;
        for(int i=0;i<(int)s.size();i++){
            int idx=s[i]-'a' ;
            if(temp->child[idx]==NULL){
                temp->child[idx]=new node(s[i],w);
            }
             temp=temp->child[idx];
            if(temp->weight<w)
               temp->weight=w;
              
        }
    }
    long long search(string s){
        node *temp=root;
        for(int i=0;i<(int)s.size();i++){
            int idx=s[i]-'a';
            if(temp->child[idx]==NULL)
               return -1;
               temp=temp->child[idx];
        }
        return temp->weight;
        
    }
    
};
int main(){
 long long n,q,w;
 string s;
 cin>>n>>q;
 trie t=trie();
 while(n--){
     cin>>s>>w;
     t.insert(s,w);
 }
 while(q--){
     cin>>s;
     cout<<t.search(s)<<endl;
 }
    
    
    
}
