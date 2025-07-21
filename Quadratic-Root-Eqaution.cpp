#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a, b, c, discriminant;
    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";cin>>a>>b>>c;

    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0){
        cout << "The equation has two distinct real roots." << endl;
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0){
        cout << "The equation has one real root." << endl;
        float root = -b / (2 * a);
        cout << "Root = " << root << endl;
    }
    else{
        cout << "The equation has no real roots." << endl;
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}