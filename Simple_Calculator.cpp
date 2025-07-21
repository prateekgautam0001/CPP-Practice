#include<iostream>
using namespace std;

int main(){
    // Simple Calculator Program
    int Num1, Num2;
    cout<<"Enter First Number: "<<endl;cin>>Num1;
    cout<<"Enter Second Number: "<<endl;cin>>Num2;

    int Addition = Num1 + Num2;
    cout<<"Additon Of Num1 And Num2 Is: "<<Addition<<endl;
    int Diffrence = Num1 - Num2;
    cout<<"Diffrence Of Num1 And Num2 Is: "<<Diffrence<<endl;
    int Multiplication = Num1 * Num2;
    cout<<"Multiplication Of Num1 And Num2 Is: "<<Multiplication<<endl;
    float Division = Num1 / Num2;
    cout<<"Division Of Num1 And Num2 Is: "<<Division<<endl;
}