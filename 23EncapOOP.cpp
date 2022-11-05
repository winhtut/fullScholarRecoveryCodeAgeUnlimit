//
// Created by National Cyber City on 9/20/2022.
//

// constructor -> same name with his class name
#include "iostream"
using namespace std;
class MyClass{
public:

    MyClass(){

        cout<<"This is constructor";
    }
    int test=10;
    void setData(int data){
        amount = data;
    }
    int getData(){
        return amount;
    }

    int myFun1(){
        cout<<"MyFun"<<endl;
    }
private:
    int amount=20000;
};

class Class2 : public MyClass{

public:
    int data=100;

};

class Class3: public Class2{

public:
    int class3data;
};


int myFun(){


    cout<<"MyFun"<<endl;
}

int main(){

    MyClass obj;

}
