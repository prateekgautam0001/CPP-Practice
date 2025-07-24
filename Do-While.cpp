#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";cin>>n;

    //1. Enter The number From 1 To N....
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
    cout<<endl;

    //2. Printing Number In Reverse....
    int z=n;
    do{
        cout<<z<<" ";
        z--;
    }while(z>=1);
    cout<<endl;

    //3. Multiplication Table....
    int a=1;
    do{
        cout<<n<<" * "<<a<<" = "<<n*a<<endl;
        a++;
    }while(a<=10);
    cout<<endl;

    return 0;
}