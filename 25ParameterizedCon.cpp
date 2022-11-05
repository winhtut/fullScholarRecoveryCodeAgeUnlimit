//
// Created by National Cyber City on 9/26/2022.
// Parameterized Constructor

#include "iostream"

using namespace std;

class MyClass{

public:
    int age;
    string name;
    int amount;
    MyClass(int dage , string dname , int damount){

        age = dage ;
        name = dname;
        amount = damount;
        getData();
    }
    void getData(){

        cout<<"age"<<age<<endl;
        cout<<"name"<<name<<endl;
        cout<<"amount"<<amount<<endl;

    }
};

int main(){

    MyClass obj(20 , "mgmg" , 100);

    return 0;
}

