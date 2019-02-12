// heap class implementation



#include<bits/stdc++.h>
using namespace std;
class Heap
{
    vector<int > v;
    bool minHeap;
    bool compare(int h1,int h2)
    {
        if(minHeap)
            return h1 >= h2;
        else
            return h1<= h2;
    }
    void heapify(int idx){
     int left=2*idx;
     int right=2*idx+1;
     int minIndex=idx;
     if(left< v.size() && compare(v[minIndex],v[left]))
     {
         minIndex=left;
     }
     if(right < v.size() && compare(v[minIndex],v[right]))
     { minIndex=right;
     }
      if(minIndex!=idx)
      {
          swap(v[minIndex],v[idx]);
          heapify(minIndex);
      }
    }
public:
    Heap(bool type=true)
    {
        minHeap=type;
        v.push_back(-1);
    }
    void push(int data)
    {
        v.push_back(data);
        int index=v.size()-1;
        int parent=index/2;
        while(parent>=1 && compare(v[parent],v[index]))
        {
            swap(v[parent],v[index]);
            index=parent;
            parent=index/2;
        }
    }
    bool empty()
    {
        return v.size()==1;
    }
    int top()
    {
        return v[1];
    }
    void pop(){
     swap(v[1],v[v.size()-1]);
     v.pop_back();
     heapify(1);
    }

};
int main(){
Heap h1(false);
h1.push(2);
h1.push(1);
h1.push(3);
h1.push(6);
h1.push(0);
h1.push(100);
while(!h1.empty())
{
    cout<<h1.top()<<"\n";
    h1.pop();
}

}
