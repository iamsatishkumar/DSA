/*STL Containers
"Sets" -> (it is simillar to unorderd_sets but it's time complexity : O(logn) & arranges element in Ascending order)
unordered_set<key> s;
s.imsert(key);
s.find(key)
s.erase(key);  = 1 if key present, 0 if key not present*/
#include<iostream>
#include<set>
using namespace std;
 
int main(){
    set<int> s;

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
