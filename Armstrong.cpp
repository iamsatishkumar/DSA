/* for any 3 digit number check whether it's an armstrong number or not */
/* Armstrong number is a number that is equal to the sum of its digits 
    eg: 371 is an armstrong number.  3*3*3 + 7*7*7 + 1*1*1 = 371 */
    
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter three digit no:";
    cin>>n;
    int num=n;
    int dig1=num%10;
    num=num/10;
    int dig2=num%10;
    num=num/10;
    int dig3=num%10;
    int cubsum=dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    if(cubsum==n){
        cout<<"is an armstrong no"<<endl;
    }else{
        cout<<"is not an armstrong no"<<endl;
    }
    
    return 0;

}