#include "iostream"
#include "vector"
#include "iterator"
using namespace std;


class Info{
private:
public:
    vector<string>vec_name;
    vector<string>vec_pass;
    int age;
    int amount;

    void print(){
        std::vector<string>::iterator ptr;
        for(ptr = vec_name.begin() ; ptr!=vec_name.end() ; ++ptr){
            cout<<*ptr<<endl;
        }
    }

    void checkName(string checkName){

        std::vector<string>::iterator ptr;
        for(ptr = vec_name.begin() ; ptr!=vec_name.end() ; ++ptr){

            if(*ptr == checkName){
                cout<<"We found data "<<checkName<<endl;
                break;
            }
        }

    }

    int Register(){

        string username;
        string password;
        string password2;
        cout<<"Enter User name ";
        cin>>username;
        cout<<"Enter Password";
        cin>>password;

        cout<<"Enter password again";
        cin >>password2;
        if ( password == password2){
            vec_name.push_back(username);
            vec_pass.push_back(password);
            return 1;
        }

        return 0;
    }
};

int main(){

    Info data;
    string name;
    string checkName;
    int option=10;

    while (option == 10){
        cout<<"Press 1 to Register:"<<endl;
        cout<<"Press 2 to Login:";
        cout<<"Press 3 to Quit:";
        cin>>option;

        if( option == 1){

            int status = data.Register();
            if(status == 1){
                cout<<"Registration Success"<<endl;
            } else{
                cout<<"Password are not same Try Again"<<endl;
            }

        } else if (option == 2){
            cout<<"This is from Login"<<endl;

        } else{
            break;
        }

    }

    return 0;
}