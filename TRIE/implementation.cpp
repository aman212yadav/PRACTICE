// implementation of Trie data structure


#include<bits/stdc++.h>
using namespace std;
class node{
public:
    char data;
    bool isTerminal;
    unordered_map<char,node* > m;
    node(char ch){
        data=ch;
        isTerminal=false;
    }

};
class trie{
     node *root;
 public:
    trie(){
    root=new node(' ');
    }
    void insertWord(string s){
       node *temp=root;
       for(int i=0;s[i];i++){
           if(temp->m.count(s[i])==1)
           {
               temp=temp->m[s[i]];
           }else{
              node *child=new node(s[i]);
              temp->m[s[i]]=child;
              temp=child;
           }

       }
        temp->isTerminal=true;
    }
    bool searchWord(string s){
       node *temp=root;
       for(int i=0;s[i];i++){
        if(temp->m.count(s[i])==1)
        {
            temp=temp->m[s[i]];
        }else
        return false;
       }
       return temp->isTerminal;
    }

};
int main(){
 trie t;
 t.insertWord("Aman");
 t.insertWord("Yadav");
 t.insertWord("Kunal");
 t.insertWord("Anita");
 t.insertWord("Devi");
 if(t.searchWord("Ama"))
    cout<<"Present\n";
 else
    cout<<"Not present\n";


}
