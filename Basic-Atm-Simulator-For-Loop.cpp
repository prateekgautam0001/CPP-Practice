#include<iostream>
using namespace std;
int main(){
    double balance = 0.0;
    int choice;
    double amount;

    for(int i=1; i<=5; i++){
        cout<<"--------------------------- 🏦 Welcome To Bank System---------------------------"<<endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";cin >> choice;

        switch(choice){
            case 1:
                cout<<"Your Current Balance Is: "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter The Amount You Want To Deposit: ";cin>>amount;
                if(amount>0){
                    balance+=amount;
                    cout<<amount<<"Deposit Succesfully....";
                }
                else{
                    cout<<"Invalid Amount"<<endl;
                }
            case 3:
                cout<<"Enter The Amount You Wnat To Withdraw:";cin>>amount;
                if(amount>0 && amount>=balance){
                    balance-=amount;
                    cout<<amount<<"Withdrwan Succesfully....";
                }
                else{
                    cout<<"Invalid Amount"<<endl;
                }
             case 4:
                cout << "Exiting early. Thank you for banking with us!" << endl;
                i = 5; // Force exit the loop
                break;

            default:
                cout << "Invalid choice. Please select between 1 to 4." << endl;
        }
    }
    cout << "\n 🔚 Session Ended. Final Balance: " << balance << endl;
    return 0;
}