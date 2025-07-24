#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number: ";cin>>n;

    int i=n;
    while(i>=1){
        cout<<i<<endl;
        i--;
    }

    //2. Reverse Order Alphabet...
    char Alpha;
    cout<<"Enter The Alphabet: ";cin>>Alpha;

    char ch=Alpha;
    while(ch>='a'){
        cout<<ch<<" ";
        ch--;
    }
    return 0;
}