#include<iostream>
using namespace std;

int main(){
    float principal, rate, time, simpleInterest;
    cout<<"Enter the principal amount: "<<endl;cin>>principal;
    cout<<"Enter The Rate Of Intreast: "<<endl;cin>>rate;
    cout<<"Enter The Time Period: "<<endl;cin>>time;

    simpleInterest = (principal * rate * time) / 100;
    cout<<"The Simple Interest is: "<<simpleInterest<<endl;

    return 0;
}