//constructor
#include<iostream>
#include<string>
using namespace std;
class car{
    string name;
    string color;

public:
    car(string nameval,string colorval){
        cout<<"conctructer is called.object being crated..\n";
        name=nameval;
        color=colorval;
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
    car c1("defender","black");
    cout<<"name :"<<c1.getname();
    return 0;
}