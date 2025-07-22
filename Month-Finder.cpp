#include<iostream>
using namespace std;

int main(){
    int Month;
    cout << "Enter the month (1-12): ";cin>>Month;

    switch (Month){
        case 1:
        cout<<"The Month Which Is Currently Running Is: January";
        break;
        case 2:
        cout<<"The Month Which Is Currently Running Is: February";
        break;
        case 3:
        cout<<"The Month Which Is Currently Running Is: March";
        break;
        case 4:
        cout<<"The Month Which Is Currently Running Is: April";
        break;
        case 5:
        cout<<"The Month Which Is Currently Running Is: May";
        break;
        case 6:
        cout<<"The Month Which Is Currnetly Running Is: June";
        break;
        case 7:
        cout<<"The Month Which Is Currently Running Is: July";
        break;
        case 8:
        cout<<"The Month Which Is Currently Running Is: August";
        break;
        case 9:
        cout<<"The Month Which Is Currently Running Is: September";
        break;
        case 10:
        cout<<"The Month Which Is Currently Running Is: October";
        break;
        case 11:
        cout<<"The Month Which Is Currently Running Is: November";
        break;
        case 12:
        cout<<"The Month Which Is Currently Running Is: December";
        break;
        default:
        cout<<"Invalid Month";
        break;
    }
    return 0;
}