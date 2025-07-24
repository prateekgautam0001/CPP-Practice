#include<iostream>
using namespace std;

int main(){
    double balance = 0.0;
    int choice;
    double amount;

    do{
        cout<<"--------------------------- 🏦 Welcome To Bank System---------------------------"<<endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice){
            case 1:
                cout<<"Your Current Balance Is: "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter The Amount You Want To Deposit: ";cin>>amount;
                if(amount>0){
                    balance = balance+amount;
                    cout<<amount<<"Deposit Succesfully...."<<endl;
                }
                else{
                    cout<<"Invalid Amount"<<endl;
                }
                break;
            case 3:
                cout<<"Enter The Amount You Want To Withdraw: ";cin>>amount;
                if(amount>0 && amount<=balance){
                    balance = balance-amount;
                    cout<<amount<<" Withdrawn Succesfully...."<<endl;
                }
                else{
                    cout<<"Invalid Amount"<<endl;
                }
                break;
            case 4:
                cout << "Thank you for using Do-While Bank. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please select between 1 to 4." << endl;
        }
        cout<<endl;
        
    }while(choice!=4);
    return 0;
}