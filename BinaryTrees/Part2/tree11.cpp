/*MAP IN C++
-----------  STL Container  -----------*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    //m[key]=value;   where key act as idx
    //Key must be unique but value can be repeate/duplicate
    m[101] = "Rahul";
    m[110] = "Neha";
    m[131] = "Ritu";
    cout<<m[101]<<endl;//Rahul

    m[101] = "Rajat";
    cout<<m[101]<<endl;//Rajat

    cout<<m.count(101)<<endl;//1
    cout<<m.count(120)<<endl;//0(coz ket is not present )

    for(auto it : m){
        cout<<it.first<<","<<it.second<<endl;
    }


    return 0;
}