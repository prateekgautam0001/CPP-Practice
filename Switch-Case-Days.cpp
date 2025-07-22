#include<iostream>
using namespace std;

int main(){
    int Day;
    cout<<"Enter the Number (1 - 7): ";cin>>Day;

    switch (Day)
    {
    case 1:
        cout<<"Today Is Monday";
        break;
    case 2:
        cout<<"Today Is Tuesday";
        break;
    case 3:
        cout<<"Today Is Wednesday";
        break;
    case 4:
        cout<<"Today Is Thursday";
        break;
    case 5:
        cout<<"Today Is Friday";
        break;
    case 6:
        cout<<"Today Is Saturday";
        break;
    case 7:
        cout<<"Today Is Sunday";
        break;
    default:
        cout<<"You Enter A Invalid Day";
        break;
    }
    return 0;
}