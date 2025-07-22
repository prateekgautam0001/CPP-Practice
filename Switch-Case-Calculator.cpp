#include<iostream>
using namespace std;

int main(){
    float a, b;
    char op;
    cout<<"Enter The First Number: ";cin>>a;
    cout<<"Enter The Second Number: ";cin>>b;
    cout<<"Enter Your operation (+ , - , * , / ): ";cin>>op;

    switch (op){
        case '+' :
            cout<<"Result Is: "<< a + b <<endl;
            break;
        case '-' :
            cout<<"Result Is: "<< a - b <<endl;
            break;
        case '*' :
            cout<<"Result Is: "<< a * b <<endl;
            break;
        case '/' :
        if(b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default :
            cout<<"Invalid Operation"<<endl;
    }
    return 0;
}