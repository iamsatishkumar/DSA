//shallow & deep copy
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Car{
    public:
        string name;
        string color;
        int *mileage;

    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage = new int;//dynamic allocation
        *mileage=12;

    }
    Car(Car &original){
        cout<<"copying original to new..\n";
        name=original.name;
        color=original.color;
        mileage=original.mileage;
    }

};
int main(){
    Car c1("Defender","Black");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    return 0;
}