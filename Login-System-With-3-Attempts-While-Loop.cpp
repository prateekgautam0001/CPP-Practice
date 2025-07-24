#include<iostream>
#include<string>
using namespace std;

int main(){
    string correctuser = "Admin";
    string correctpass = "1234";

    string username, password;
    int attempts = 0;
    bool loggedIn = false;

    while (attempts<3){
        cout<<"Enter The Username ";cin>>username;
        cout<<"Enter The Password: ";cin>>password;

        if(username==correctuser && password==correctpass){
            cout<<"\n ✅ Login successful! Welcome, " << username << " . " << endl;
            loggedIn = true;
            break;
        }
        else{
            cout<<"\n❌ Incorrect username or password. Please try again." << endl;
        }
    }
    if(loggedIn == false){
        cout<<"\n ⛔ Too many failed attempts. Access denied!" << endl;
    }
    return 0;
}