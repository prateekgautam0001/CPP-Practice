#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";cin>>n;

    int i=n;
    do{
        int j=1;
        do{
            cout<<j;
            j++;
        }while(j<=i);
        cout<<endl;
        i--;
    }while(i>=1);
    return 0;
}