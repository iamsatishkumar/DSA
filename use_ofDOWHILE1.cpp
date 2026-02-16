/*Write a C++ program that continuously prompts the user to enter a positive integer. The program should calculate and display
 the sum ofall the positive integers entered by the user. The loop should terminate when the user enters a negative integer. 
 After exiting the loop, display the total sum of the positive integers entered.

Bonus Challenge: Modify the program to also count how many positive integers were entered before the negative integer was input.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int sum=0;
    int count=0;
    cout<<"enter only +ve interger"<<endl;
    do{
        cout<<"enter no :";
        cin>>num;
        if(num>=1){
            sum+=num;
            count++;
        }else{
            break;
        }
    }
    while(true);
    cout<<"sum :"<<sum<<endl<<"no of +ve integer :"<<count;

    
    
    return 0;
}
