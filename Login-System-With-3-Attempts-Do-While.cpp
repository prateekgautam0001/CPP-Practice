#include<iostream>
#include<string>
using namespace std;

int main(){
    string correctuser = "Admin";
    string correctpass = "1234";

    string username, password;
    int attempts = 0;
    bool loggedIn = false;

    do{
        cout<<"Enter Your Username: ";cin>>username;
        cout<<"Enter Your Password: ";cin>>password;

        if(username==correctuser && password==correctpass){
            cout<<"\n ✅ Loggin Succesfully...."<<username<<" . "<<endl;
            loggedIn = true;
            break;
        }
        else{
            cout<<"\n ❌ Incorrect Username Or Password. Try Again...." << endl;
            attempts++;
        }
    }while(attempts<3);
    if (!loggedIn) {
        cout<<"\n ⛔ Too many failed attempts. Account locked!" << endl;
    }
    return 0;
}