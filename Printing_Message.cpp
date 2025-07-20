#include<iostream>
using namespace std;
int main(){

    //1. Hello World
    cout<<"Hello World"<<endl;
    //2. Print a Motivational Quote
    cout<< "The future belongs to those who believe in the beauty of their dreams" <<endl;
    //3. Print User’s Name with Greeting
    string name;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Hello "<<name<<" I Hope You Are Doing Better Coding Now."<<endl;
    //4. Print Message with Current Date (Manual Input)
    int date, month, year;
    cout<<"Enter Date: "<<endl;cin>>date;
    cout<<"Enter Month: "<<endl;cin>>month;
    cout<<"Enter Year: "<<endl;cin>>year;
    cout<<"Today's Date is: "<<date<<"/"<<month<<"/"<<year<<endl;

    // So Here The End Of This File
    return 0;
}