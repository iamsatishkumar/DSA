//basic of ooops
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Student{
    //properties
    string name;
    float cgpa;
    
    void getpercentage(){
        cout<<cgpa*10<<"%\n";
    }

};

class User{
    int id;
    public:
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"delete account";
    }

};
int main(){
    Student s1;
    User satish;
    cout<<sizeof(s1)<<endl;
    cout<<sizeof(satish)<<endl;
    satish.username="manish";
    cout<<satish.username<<endl;
    satish.deactivate();

    return 0;
}