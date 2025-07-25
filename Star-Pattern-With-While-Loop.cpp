#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Rows And Columne: ";cin>>n;

    //1. Box Star Pattern.....
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }
    cout<<endl;


    //2. Right Angle Triangle.....
    int a=1;
    while(a<=n){
        int b=1;
        while(b<=a){
            cout<<"* ";
            b++;
        }
        a++;
        cout<<endl;
    }
    return 0;
}