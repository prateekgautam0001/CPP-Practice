#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number: ";cin>>n;

    //1. Box Star Pattern
    int i=1;
    do{
        int j=1;
        do{
            cout<<"* ";
            j++;
        }while(j<=n);
        i++;
        cout<<endl;
    }while(i<=n);

    //2. Right Angle Triangle
    int a=1;
    do{
        int b=1;
        do{
            cout<<"* ";
            b++;
        }while(b<=a);
        a++;
        cout<<endl;
    }while(a<=n);
    return 0;
}