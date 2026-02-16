//reverse a char array
#include<bits/stdc++.h>
using namespace std;
void ReverseCharArr(char word[],int n){
    int start=0, end=n-1;//strlen(word)=6(it does not include null character)
    while(start <= end){
        swap(word[start],word[end]);
        start++;
        end--;
        cout<<start<<endl;
        
    }
    cout<<word;
    

}
int main(){
    char word[]="satish";
    ReverseCharArr(word,strlen(word));
    
    return 0;
}