#include<iostream>
using namespace std;

int main(){
    float AnnualIncome;
    cout<<"Enter Your Annual Income: ";cin>>AnnualIncome;
    if(AnnualIncome<=250000){
        cout<<"You are in 0% tax slab";
    }
    else if (AnnualIncome>250000<500000){
        cout<<"You are in 5% tax slab";
    }
    else if (AnnualIncome>500000<1000000){
        cout<<"You are in 10% tax slab";
    }
    else{
        cout<<"You are in 20% tax slab";
    }
    return 0;
}