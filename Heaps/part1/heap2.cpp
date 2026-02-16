/*build heap data structure*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Heap{
    vector<int> vec;
public:
    
    void push(int val){//O(logn)
        //step1:push val
        vec.push_back(val);
        
        //step2:fix heap
        int chidx=vec.size()-1;
        int pridx=(chidx-1)/2;
        while(pridx >= 0 && vec[chidx] > vec[pridx]){
        //for min heap ----> ( vec[chidx] < vec[pridx] ) then swap
            swap(vec[chidx],vec[pridx]);
            chidx=pridx;
            pridx=(chidx-1)/2;
        }
    }
    void heapify(int i){//i=parent idx
        //base case
        if(i >= vec.size()){
            return;
        }

        int l=2*i+1;
        int r=2*i+2;

        int maxIdx=i;
        if(l < vec.size() && vec[l] > vec[maxIdx]){
            maxIdx=l;
        }
        if(r < vec.size() && vec[r] > vec[maxIdx]){
            maxIdx=r;
        }

        swap(vec[i],vec[maxIdx]);
        if(maxIdx != i){//swapping with any child node
        //(used it so that parent doesn't swap with itself and we can call for heapify)
            heapify(maxIdx);
        }    
    }

    void pop( ){
        //sstep1:swap root with last idx
        swap(vec[0],vec[vec.size()-1]);

        //step2:delete last idx
        vec.pop_back();

        //step3:heapify(fix heap)
        heapify(0);
    }

    int top(){//O(1)
        if(!isEmpty()){
            return vec.front();
        }
    }

    bool isEmpty(){
        return vec.size()==0;
    }
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    while(!heap.isEmpty()){
        cout<<"Top : "<<heap.top()<<endl;
        heap.pop();
    }
   
    return 0;
}