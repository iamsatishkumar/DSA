//print the sum of digits of a number using while loop
/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    int i=1;
    cout<<"enter three digit no:";
    cin>>num;
    while(i<=3){
        sum=sum + num%10;
        num=num/10;
        i++;  
    }
    cout<<sum;
    return 0;
}
*/
//print the sum of odd digits of a number using while loop
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter no:";
    cin>>num;
    while(num>0){
        if(num %2==0){
            sum=sum;
        }
        else{
            sum=sum + num%10;
        }
        num=num/10;

        }
        cout<<"sum is:"<<sum;
        return 0;
    }
        */
       //print the reverse of no.
       #include<iostream>
       using namespace std;
       int main(){
        int num;
        int Rnum=0;
        cout<<"enter no:";
        cin>>num;
        while(num>0){
            Rnum=Rnum*10 + num%10;
            num=num/10;
        }
        cout<<"Rnum is:"<<Rnum;
        return 0;
       }


