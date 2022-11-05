//
// Created by National Cyber City on 9/27/2022.
//
#include "iostream"
using namespace std;

class MyClass{
public:
    int indexCount=0;
    int dage;
    string dname;
    void checkEmail();
    void printData();
    string email[100];

    MyClass(int age , string name){

        dage=age;
        dname = name ;

        setter();
        getter();
    }

    void getter(){
        cout<<"amount "<<amount<<endl;
        cout<<"password"<<password<<endl;

    }

    void setter(){
       amount = dage;
       password = dname;
    }

private:

    int amount=10000;
    string password="123winwin";

    void pFuntion(){
        cout<<"This is from pFunction"<<endl;
    }

};

void MyClass::checkEmail(){
    string myemail;
    cout<<"Enter your email :";
    cin>>myemail;
    email[indexCount] = myemail;
    indexCount++;
    printData();

}
void MyClass::printData(){
    for(int i=0; i <= indexCount ; i++){
        cout<<"email :"<<email[i]<<endl;
    }

}
int main(){

    MyClass obj(100 , "123win");

    obj.checkEmail();





    return 0;
}
