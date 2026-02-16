//setters & Getters
#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    float cgpa;
    public:
    void getpercentage(){
        cout<<(cgpa*10)<<"%\n";
    }
    //setters
    void setname(string nameval){
        name=nameval;
    }
    void setcgpa(float cgpaval){
        cgpa=cgpaval;
    }
    //Getters
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};

int main(){
    student s1;
    s1.setname("satish");
    s1.setcgpa(8.62);
    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;
    s1.getpercentage();
    return 0;
}