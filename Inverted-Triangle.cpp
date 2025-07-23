#include<iostream>
using namespace std;

int main(){

    //1. Left Side Inverted Triangle...
    int n;
    cout<<"Enter The Number Of Rows For Left Side Inverted Traingle: ";cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
    }
    cout<<endl;
    }

    // 2. Right Side Inverted Triangle...

    int a;
    cout<<"Enter The NUmber Of Rows For Right Side Inverted Triangle: ";cin>>a;

    for(int i=a; i>0; i--){
        for(int j=1; j<=a; j++){
            if(j>=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}