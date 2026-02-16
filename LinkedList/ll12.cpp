// Range based loop in c++ tp print list
// iterate over every elements in list and copy it to the variable x
#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> myList;

    myList.push_back(10);
    myList.push_back(15);
    myList.push_back(20);
    myList.push_back(25);
    myList.push_back(30);
    for(int x : myList) {
        cout<< x <<"->";
    }
    cout<<"NULL"<<endl;
    return 0;
}
