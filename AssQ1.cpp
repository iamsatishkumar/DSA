//Question 5 : For any 3 digit number check whether it’s an Armstrong number or not. 
//Armstrong number is a number that is equal to the sum of cubes of its digits. 
//Eg : 371 is an armstrong number. 
//3*3*3 + 7*7*7 + 1*1*1 = 371
/*
#include<iostream>
#include<cmath>
using namespace std;
int ArmN(int ORnum,int digit){
    int CopiedNum=0;
    int num=ORnum;
    for(int i=1; i<=digit; i++){
        CopiedNum +=pow(ORnum%10,digit);
        num=num/10;

    }
    cout<<"copied no="<<CopiedNum<<endl;//
    cout<<"original no="<<ORnum<<endl; 
    if(ORnum==CopiedNum){
        cout<<"Given no is an armstrong :)"<<endl;//
    }
    else{
        cout<<"Given no is not an armstrong no :("<<endl;//
    }

}
int main(){
    int ORnum;
    cout<<"enter no=";
    cin>>ORnum;
    int num=ORnum;
    int digit=0;
    while(num>0){
        num=num/10;
        digit++;
    }
    cout<<"no of digit="<<digit<<endl;//
    ArmN(ORnum,digit);
    return 0;
}
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int ORnum;
    
    int copiedNUM=0;
    cout<<"enter three digit no=";
    cin>>ORnum;
    int num=ORnum;
    while(num>0){
        copiedNUM+=pow(num%10,3);
        num/=10;
    }
    cout<<copiedNUM<<endl;
    if(copiedNUM==ORnum){
        cout<<"Entered no is an armstrong number"<<endl;
    }else{
        cout<<"Entered no is not an armstrong number"<<endl;
    }
    return 0;
}