//copy constructor
#include<bits/stdc++.h>
#include<string>
using namespace std;
class car{
    public:
        string name;
        string color;
    //default,automatic constructor
    car(string name,string color){
        this->name=name;
        this->color=color;
    }
    //custom constructor
    car(car &original){
        cout<<"copying original to new\n";
        name=original.name;
        color=original.color;
    }
};
int main(){
    car c1("Defender","Black");
    car c2(c1);
    cout<<c2.name<<endl<<c1.color<<endl;
    return 0;
}