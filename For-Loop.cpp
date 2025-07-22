#include<iostream>
using namespace std;

int main(){

    // 1. Basic For Loop...
    int i = 1;
    cout<<"Current Number is: "<<i<<endl;
    for (int i = 0; i < 5; i++){
        cout<<"Current Number is: "<<i<<endl;
    }

    // 2. Getting Number From User...
    int n;
    cout<<"Enter the number: ";cin>>n;
    for (int i = 1; i < n; i++){
        cout<<"Current Number is: "<<i<<endl;
    }

    // 3. Printing Number In Reverse Order...
    int z;
    cout<<"Enter the number: ";cin>>z;
    for(int i = z; i >= 1; i--){
        cout<<"Current Number is: "<<i<<endl;
    }

    // 4. Multiplication Table...
    int Number;
    cout<<"Enter the number: ";cin>>Number;
    for(int i = 1; i <= 10; i++){
        cout<<Number<<" * "<<i<<" = "<<Number*i<<endl;
    }

    // 5. Factorial...
    int fact = 1, a;
    cout<<"Enter the number: ";cin>>a;
    for (int i = 1; i <= a; i++){
        fact = fact * i;
    }
    cout<<"Factorial Of "<<a<<" Is: "<<fact<<endl;

    // 6. Charcter Printing (A - Z)...
    char ch;
    cout<<"Charcter For A To Z Are: ";
    for (char ch = 'A'; ch <= 'Z';ch++){
        cout<<ch<<" ";
    }
    cout<<endl;

    // 7. Lower Case Charcter Printing...
    char ch1;
    cout<<"Charcter For a To z Are: ";
    for(char ch1 = 'a'; ch1 <= 'z'; ch1++){
        cout<<ch1<<" ";
    }
    cout<<endl;

    return 0;
}