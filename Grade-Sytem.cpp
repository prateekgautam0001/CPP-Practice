#include<iostream>
using namespace std;

int main(){
    float percentage;
    cout << "Enter the percentage: ";cin>>percentage;
    if(percentage>=90){
        cout<<"Grade: A"<<endl;
    }
    else if (percentage>=80<90){
        cout<<"Grade: B"<<endl;
    }
    else if (percentage>=70<80){
        cout<<"Grade: C"<<endl;
    }
    else{
        cout<<"Grade: F"<<endl;
    }
    return 0;
}