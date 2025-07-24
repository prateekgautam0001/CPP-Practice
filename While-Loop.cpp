#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number: ";cin>>n;

    //1. Printing Number...
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }

    //2. Multiplication Table...
    int a=1;
    while(a<=10){
        cout<<n<<"*"<<a<<"="<<a*n<<endl;
        a++;
    }

    //3. Charcter Printing A-Z...
    char N;
    cout<<"Enter The Character From A-Z: ";cin>>N;
    char ch=N;
    while(ch<='Z'){
        cout<<ch<<" ";
        ch++;
    }

    //4. Factorial...
    int fact = 1,A;
    cout<<endl<<"Enter The Number: ";cin>>A;
    int f=1;
    while(f<=A){
        fact = fact * i;
        f++;
    }
    cout<<"Factiorai Of "<<A<<" Is: "<<fact<<endl;
    return 0;
}