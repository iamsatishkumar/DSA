// create a user class with properties: id(private),username(public),&password(private)
//its id should be initialized in a parameterised constructor
//it should have getter & setter for password.
#include<bits/stdc++.h>
#include<string>
using namespace std;
class user{
private:
    int id;
    string password;

public:
    string username;
    user(int id ){
        cout<<"enter your id:";
        this->id=id;
    }
    //Getter
    string getpassword(){
        return password;
    }
    //setter
    void setpassword(string password){
        this->id=id;
    }
};
int main(){
    user user1(707);
    user1.username="satish_kr_0707";
    user1.setpassword("hello_123");
    cout<<user1.username<<endl;
    cout<<user1.getpassword()<<endl;
    

}