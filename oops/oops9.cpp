//compile time polymorphism
#include<bits/stdc++.h>
#include<string>
using namespace std;
//Function overloading
class print{
public:
    void show(int x){
        cout<<"int : "<<x<<endl;
    }
    void show(string str){
        cout<<"string : "<<str<<endl;
    }
};
//Operator overloading
class Complex{
    int real;
    int img;

public:
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void showNum(){
        cout<< real <<"+"<< img <<"i \n";
    }   
    //Operator overloading
    void operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        cout<<"res = ";
        c3.showNum();

    }
};



int main(){
    print obj1;
    obj1.show(18);
    obj1.show("virat kohli");
    Complex c1(4,3);
    Complex c2(6,5);
    c1.showNum();
    c2.showNum();

    c1+c2;
    return 0;
}