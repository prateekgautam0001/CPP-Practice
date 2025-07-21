#include<iostream>
#include<string>
using namespace std;

int main(){
    // Personal Info Program

    string Name, City, Favfood, Favmovie, Gender, Email;
    int Age;

    cout<<"Enter your name: "<<endl;cin>>Name;
    cout<<"Enter Your Email ID: "<<endl;cin>>Email;
    cout<<"Enter The Name of City Where You Live: "<<endl;cin>>City;
    cout<<"Enter Your Favourite Food: "<<endl;cin>>Favfood;
    cout<<"Enter Your favourite Movie: "<<endl;cin>>Favmovie;
    cout<<"Enter Your Age: "<<endl;cin>>Age;
    cout<<"Enter Your Gender: "<<endl;cin>>Gender;
    cout<<endl;

    cout<<"Your Name Is: "<<Name<<endl;
    cout<<"Your Email Id Is: "<<Email;
    cout<<"City You Live In: "<<City<<endl;
    cout<<"Your Favourite Food: "<<Favfood<<endl;
    cout<<"Your Favourite Movie: "<<Favmovie<<endl;
    cout<<"Your Age Is: "<<Age<<endl;
    cout<<"Your Gender Is: "<<Gender<<endl;

    return 0;
}