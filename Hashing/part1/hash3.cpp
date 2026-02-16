/*STL Containers
"Maps" -> (it arrange our data in a order (generally in asceding order))
map<key,val> m;
m[key]=val;
count<<m[key]
m.count(key);  = 1 if key present, 0 if key not present*/
#include<iostream>
#include<map>
using namespace std;

int main(){
    //key,value
    map<string,int> m;

    m["india"]=150;
    m["china"]=140;
    m["us"]=50;
    m["uk"]=20;
    m["canada"]=30;

    //searching any key
    cout<<"value of india : "<<m["india"]<<endl;

    //printing whole map for which we are storing it in pair
    for(pair<string,int> country : m){
        cout<<country.first<<","<<country.second<<endl;
    }

    //count -> 0 (key doesn't exist in map) , count -> 1 (key exist in map)
    if(m.count("china")){
        cout<<"china exists\n";
    }else{
        cout<<"china doesn't exists\n";
    }

    //erase
    m.erase("canada");
    cout<<"----------  After removing  -----------\n";
    for(pair<string,int> country : m){
        cout<<country.first<<","<<country.second<<endl;
    }
    return 0;
}