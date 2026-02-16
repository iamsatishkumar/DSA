//convert to lowercase
#include<bits/stdc++.h>
using namespace std;
void tolowercase(char word[],int n){
    for(int i=0; i<=n; i++){
        if('A'<= word[i] && word[i] <= 'Z'){
        char position=word[i]-'A';
        char lowercase='a';
        lowercase+=position;
        word[i]=lowercase;
        }
        cout<<word[i];
    }
    cout<<endl;
}


int main(){
    char word[]="ApPle";
    tolowercase(word,strlen(word));
    cout<<word<<endl;
    return 0;
} 