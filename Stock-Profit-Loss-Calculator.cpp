#include<iostream>
using namespace std;

int main(){
    int StockPrice, SellingPrice;
    cout<<"Enter The Price Of Stock You Purcase: ";cin>>StockPrice;
    cout<<"Enter The Price You Sell The Stock: ";cin>>SellingPrice;

    if(StockPrice<SellingPrice){
        cout<<"You Get A Profit"<<endl;
    }
    else if(StockPrice>SellingPrice){
        cout<<"You Get A Loss"<<endl;
    }
    else{
        cout<<"You Get No Profit Or Loss"<<endl;
    }
    return 0;
}