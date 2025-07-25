#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number: ";cin>>n;

    //1. Box Pattern
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    
    //2. Right Angle Triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}