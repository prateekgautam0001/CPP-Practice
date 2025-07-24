#include<iostream>
#include<string>
using namespace std;

int main(){
    string correctuser = "Admin";
    string correctpass = "1234";

    string username, password;
    bool loggedIn = false;

    for(int attempts=1; attempts<=3; attempts++){
        cout<<"The Total Attempts You Have Is: "<<attempts<<endl;
        cout<<"Enter Your Username: ";cin>>username;
        cout<<"Enter Your Password: ";cin>>password;

        if(username==correctuser && password==correctpass){
            cout<<"\n ✅ Login successful! Welcome, " << username << " . " << endl;
            loggedIn = true;
            break;
        }
        else{
            cout<<"\n ❌ Incorrect username or password. Please try again." << endl;
            attempts++;
        }
    }
    if(loggedIn == false){
        cout<<"\n ⛔ Too many failed attempts. Access denied!" << endl;
    }
    return 0;
}