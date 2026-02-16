//Hierarchial Inheritance
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"Eats..\n";
    }
    void breathe(){
        cout<<"Breathes..\n";
    }
};
class Bird : public Animal{
public:
    void fly(){
        cout<<"flys..\n";
    }
};
class Fish : public Animal{
public:
    void swim(){
        cout<<"swims..\n";
    }
};
class Mammal : public Animal{
public:
    void walk(){
        cout<<"walks\n";
    }
};
int main(){
    Bird b1;
    Fish f1;
    Mammal m1;
    b1.fly();
    f1.swim();
    m1.walk();
    b1.eat();
    return 0;
}