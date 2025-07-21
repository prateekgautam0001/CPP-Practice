#include<iostream>
using namespace std;

int main(){
    // With Third Variable.
    int a,b,temp;
    cout<<"Enter the first number: "<<endl;cin>>a;
    cout<<"Enter the second number: "<<endl;cin>>b;
    cout<<"Before Swapping: A = "<<a<<" B = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swappinng: A = "<<a<<" B = "<<b<<endl;

    // Without Third Variable.
    int z,y;
    cout<<"Enter The Value Of Z: "<<endl;cin>>z;
    cout<<"Enter The Value Of Y: "<<endl;cin>>y;
    cout<<"Before Swapping: Z = "<<z<<" Y = "<<y<<endl;

    z = z + y;
    y = z - y;
    z = z - y;

    cout<<"After Swapping: Z = "<<z<<" Y = "<<y<<endl;

    return 0;
}