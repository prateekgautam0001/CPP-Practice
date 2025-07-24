#include<iostream>
using namespace std;

int main(){
    int choice;
    double balance=0.0,amount;

    while(true){
        cout<<"------------------Welcome To Bank------------------"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter The Choice(1-4): ";cin>>choice;

        switch(choice){
            case 1:
                cout<<"Your Current Balance Is: "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter The Amount You Want To Deposit: ";cin>>amount;
                if(amount>0){
                    balance+=amount;
                }
                else{
                    cout<<"Invalid Amount"<<endl;
                }
                break;
            case 3:
                cout<<"Enter The Amount You Want To Withdraw: ";cin>>amount;
                if(amount>0 && amount<=balance){
                    balance-=amount;
                }
                else{
                    cout<<"Invalid or Insufficient Amount"<<endl;
                }
                break;
            case 4:
                cout<<"Thank You For Using The Bank....";
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }
    return 0;
}