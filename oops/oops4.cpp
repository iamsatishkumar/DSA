//Types of constructor
//constructor
#include<iostream>
#include<string>
using namespace std;
class car{
    string name;
    string color;

public:
    car(){
        cout<<"constructor without paramerters\n";
    }

    car(string name,string color){
        cout<<"conctructer is called.object being crated..\n";
        this->name=name;//this->prop = *(this).prop
        this->color=color;
    }
    void start(){
        cout<<"car has started\n";
    }
    void stop(){
        cout<<"car has stopped\n";
    }
    //getter
    string getname(){
        return name;
    }
};
int main(){
    car c0;
    car c1("defender","black");
    cout<<"name :"<<c1.getname();
    return 0;
}