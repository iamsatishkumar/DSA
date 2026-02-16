//Create a class to store complex numbers. using operator overloading,
//create the logic to substract one complex number from another
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Complex{
    int real;
    int img;
public:
    Complex(int r,int i){
        real=r;
        img=i;

    }
    void showNum(){
        cout<<real<<"+"<<img<<"i\n";
    }
    //operator overloading
    void operator - (Complex &c2){
        int resReal=this->real - c2.real;
        int resImg=this->img - c2.img;
        Complex c3(resReal,resImg);
        cout<<"res = ";
        c3.showNum();
    

    }
};
int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    c1.showNum();
    c2.showNum();
    c1-c2;
    return 0;
}