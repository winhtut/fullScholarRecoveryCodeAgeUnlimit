//
// Created by National Cyber City on 9/20/2022.
//
#include "iostream"
using namespace std;

class Dog{
public:
    string name;
    int age;
    int weight;
    string data[5]={"mgmg","aungaung","bobo","htut"};
    char* cData[10]={"win","htut","national","cyber","city"};


    void eat(){
        cout<<"The dog is eating"<<endl;
    }

    void bike(){

        cout<<"The dog can bike you"<<endl;
    }


    void gettingData1() {
        int i=0;

        for (i = 0; i < 10; i++){
            cout << "data :" << data[i] << endl;
        }
    }

    void gettingData() {

        for (int i = 0; i < 10; i++) {
            cout << "data :" << cData[i] << endl;
        }
    }
};

int main(){

    Dog bobo;
    bobo.age=12;
    bobo.weight = 7;
    bobo.name = "bobo";

    cout<<"Mg dog name is "<<bobo.data[1]<<endl;
    cout<<"Mg dog name is "<<bobo.cData[1]<<endl;

    bobo.gettingData1();
    bobo.gettingData();


    return 0;
}