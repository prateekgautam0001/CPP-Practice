#include<iostream>
using namespace std;
int main(){
    int BirthYear, CurrentYear, Age;
    cout<<"Enter your year of birth: ";cin>>BirthYear;
    cout<<endl;
    cout<<"Enter Current Year: ";cin>>CurrentYear;
    cout<<endl;
    Age = CurrentYear - BirthYear;
    if(Age<18){
        cout<<"You are a minor. You cannot vote and you cannot get a driving licence beacause your age is: "<<Age;
    }
    else{
        cout<<"You are a major. You can vote and get a driving licence";
    }
    return 0;
}