//max Area in Histogram
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int maxAreaHistogram(vector<int> height) {
    int n=height.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    stack<int> s;

    //next smaller left
    nsl[0]=-1;
    s.push(0);
    for(int i=1; i<height.size(); i++) {
        int curr=height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()){
            nsl[i]=-1;
        } else {
            nsl[i]=s.top();
        }
        s.push(i);
    }
    //clear stack for reuse to find nsr
    while(!s.empty()){
        s.pop();
    }

    //next smaller right
    s.push(n-1);
    nsr[n-1]=n;
    for(int i=n-2; i>=0; i--) {
        int curr=height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty() ) {
            nsr[i]=n;
        } else {
            nsr[i]=s.top();
        }
    }
    
    for(int idx=0; idx<nsl.size(); idx++) {
        cout<<nsr[idx]<<" ";
    }

    int maxArea=0;
    for(int i=0; i<n; i++) {
        int ht=height[i];
        int width=nsr[i]-nsl[i]-1;
        int Area=ht*width;
        maxArea=max(Area,maxArea);
    }
    return maxArea;

}
int main() {
    vector<int> height={2,1,5,6,2,3};
    cout<<maxAreaHistogram(height);
    return 0;
}
/*
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int maxHistogram(vector<int> height){
    int n=height.size();
    stack<int> s;

    //next smaller left
    vector<int> nsl(n,0);//idx
    s.push(0);//stores idx
    nsl[0]=-1;
    for(int i=1; i<n; i++){
        while(!s.empty() && height[s.top()] >= height[i]){
            s.pop();
        }
        if(s.empty()){
            nsl[i]=-1;
        }else{
            nsl[i]=s.top();
        }
        s.push(i);
    }
    for(int i=0; i<nsl.size(); i++){
        cout<<nsl[i]<<" ";
    }
    //making stack empty to reuse it
    while(!s.empty()){
        s.pop();
    } 

    //next smaller right
    vector<int> nsr(n,0);
    s.push(n-1);//pushed last idx
    nsr[n-1]=n;
    for(int i=n-2; i>=0; i--){
        while(!s.empty() && height[s.top()] >= height[i]){
            s.pop();
        }
        if(s.empty()){
            nsr[i]=n;
        }else{
            nsr[i]=s.top();
        }
        s.push(i);
    }
    cout<<" \n-------  ----------\n ";
    for(int i=0; i<nsr.size(); i++){
        cout<<nsr[i]<<" ";
    }
    int area=0;
    for(int i=0; i<n; i++){
        int currArea=nsr[i]-nsl[i]-1;
        area=max(area,currArea);
    }
    return area;

}
int main(){
    vector<int> height={2,1,5,6,2,3};
    cout<<"\nmax Area : "<<maxHistogram(height);
    return 0;
}
*/