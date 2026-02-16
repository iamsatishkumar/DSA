/*Question 1 : Given an integer array nums, return true if any value appears at least 
twice in the array, and return false if every element is distinct. [link] 
Examples : 
Input: nums = [1,2,3,4] 
Output: false 
Input: nums = [1,1,1,3,3,4,3,2,4,2] 
Output: true */
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isFound(vector<int> num,int n){
    int i=0;
    while(i<n-1){
        for(int j=i+1;j<n;j++){
            if(num[i]==num[j]){
                return true;
            }
        }
        i++;
    }
    return false;
}
int main(){
    vector<int> num={1,2,3,4,5,5};
    if(isFound(num,6)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    return 0;

}