//waf to find first occurence of an element in a vector
//waf to find last occurence of an element
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//first occurence
int FirstOcc(vector<int> vec1,int i,int target){
    if(vec1[i]==vec1.size()){
        return -1;
    }
    if(vec1[i]==target){
        return i;
    }
    return FirstOcc(vec1,i+1,target);
}

//Last occurence(my method)
int LastOcc(vector<int> vec2,int i,int target){
    if(i<0){
        return -1;
    }
    if(vec2[i]==target){
        return i;
    }
    return LastOcc(vec2,i-1,target);

} 
//Last occurence(maam method)
int lastOcc(vector<int> vec,int i,int target){
    if(i==vec.size()){
        return -1;
    }
    

    int idxFound=lastOcc(vec,i+1,target);
    if(idxFound==-1 && vec[i]==target){
            return i;
        
    }
    return idxFound;

}
int main(){
    vector<int> vec1={1,2,3,3,3,4};
    vector<int> vec2={1,2,3,3,3,4};
    cout<<"First Occurence : "<<FirstOcc(vec1,0,3)<<endl;
    cout<<"Last occurence : "<<LastOcc(vec2,vec2.size()-1,3)<<" "<<lastOcc(vec1,0,3)<<endl;
    return 0;
}