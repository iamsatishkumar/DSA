//Question 2 :  Write a function to calculate the sum of digits of a number.
//Question 3 :  Write a function which takes 2 numbers as parameters (a & b) and 
//outputs : a^2 + b^2 + 2*ab.
#include<bits/stdc++.h>
using namespace std;
int digitSum(int num){
    int sum=0;
    while(num>0){
        int last_digit=num%10;
        sum+=last_digit;
        num/=10;
    }
    return sum;
}
int square(int a,int b){
    return a*a+b*b+2*a*b;
}
int max3N(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(a<b && b>c){
        return b;
    }else{
        return c;
    }
}
int main( ){
    int n=123;
    cout<<digitSum(n)<<endl;
    cout<<max3N(42,15,9);
    return 0;
}