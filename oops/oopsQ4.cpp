// Create a base class Person with attributes name and age. 
//Derive a class Student from Person and add an additional attribute studentID. 
//Implement a method displayStudentInfo( ) in the Student class to display all details. 
//In main function Student class object will be created in this format: 
//Student student("Alice", 20, "S12345"); 
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;
};
class Student : public Person{
public:
    string id;
public:
    Student(string name,int age,string id){
        this->name=name;
        this->age=age;
        this->id=id;
    }

    void displayStudentInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"id :"<<id<<endl;
    }

};

int main(){
    Student s1("satish",20,"2414110670");
    s1.displayStudentInfo();
    return 0;
}