/*Question 1 : Use the following sorting algorithms to sort an array in DESCENDING 
order : 
a. Bubble Sort 
b. Selection Sort 
c. Insertion Sort 
d. Counting Sort 
You can use this array as an example : [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]*/
#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> vec1){
    for(int i=0; i<vec1.size(); i++){
        for(int j=i+1; j<vec1.size(); j++){
            if(vec1[i]<vec1[j]){
                swap(vec1[i],vec1[j]);
            }
        }
    }
    for(int i=0; i<vec1.size(); i++){
        cout<<vec1[i]<<",";
    }
    cout<<endl;

}
void SelectionSort(vector<int> vec1){
   
    for(int i=0; i<vec1.size(); i++){
       int currElement=i;
        for(int j=1+i; j<vec1.size(); j++){
            if(vec1[currElement]<vec1[j]){
                currElement=j;
            }
        }
        swap(vec1[currElement],vec1[i]);
    }
    for(int i=0; i<vec1.size(); i++){
        cout<<vec1[i]<<",";
    }
    cout<<endl;   
}/*
void Selectionsort(vector<int> vec1){
    for(int i=0; i<vec1.size(); i++){
        int minIdx=i;
        for(int j=0+i; j<vec1.size(); j++){
            if(vec1[minIdx]>vec1[j]){
                minIdx=j;
            }
        }
        swap(vec1[i],vec1[minIdx]);
        cout<<vec1[i]<<",";
    } 
}*/
int main(){
    vector<int> vec1={3,6,2,1,8,7,4,5,3,1};
    BubbleSort(vec1);
    SelectionSort(vec1);
    //Selectionsort(vec1);
    return 0;
}