/*STL Containers
"Unordered_Sets" -> (it is simillar to unorderd_map but it only stores key which is unique)
unordered_set<key> s;
s.imsert(key);
s.find(key)
s.erase(key);  = 1 if key present, 0 if key not present*/
#include<iostream>
#include<unordered_set>
using namespace std;
 
int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    //s.insert(1);
    //s.insert(1);
    //s.insert(1);

    cout<<"size of set : "<<s.size()<<endl;//4 -(if we insert(1) it will not increase size of set coz it stores unique val )
    //search
    //if { s.find(key) == s.end() -> false (key doesn't exists)} , { s.find() != s.end() -> true (key exists)}
    if(s.find(3) != s.end()){
        cout<<"exist\n";
    }else{
        cout<<"doesn't exist\n";
    }
    //to remove 
    s.erase(3);
    //printing set
    for(auto el : s){
        cout<<el<<" ";
    }
    return 0;

}
