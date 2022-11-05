//
// Created by National Cyber City on 9/20/2022.
//
// OOP lesson by NCC

#include "iostream"
using namespace std;

class MyClass{
public:
    int firstdata=10;
    string name[10]={"win","ncc"};
    // behaviour
    void showData(){

        cout<<"this is from showData Function"<<endl;
    }
};
int main(){
    MyClass classObj;
    MyClass obj2;
    string data;
    cout<<"Enter yourname:";
    cin>>data;

    classObj.name[0]=data;
    obj2.name[0]="National";

    cout<<"data "<<classObj.name[0]<<endl;
    cout<<"data "<<obj2.name[0]<<endl;

    classObj.showData();

    return 0;
}
