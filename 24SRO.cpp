//
// Created by National Cyber City on 9/26/2022.
// public , private , protected -> derived class
//

#include "iostream"
using namespace std;

class MyClass{

public:
private:
protected:
    int data;

};
class Dclass1 :public MyClass{

public:
    void accessing(int something){

        data = something;
    }


};

int main(){



    return 0;
}

