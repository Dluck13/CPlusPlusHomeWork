/*
Student Name: Dimitri Luck
Program Description: this program returns the root or no root depending on the discriminant
Date Submitted: 03/10/2023
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //get user input for a,b,c
    double a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    //equation for discriminant
    double discriminant = b*b - 4*a*c;

    //The else if statement that checks for value
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "The two roots are " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "The equation has one root: " << root << endl;
    } else {
        cout << "The equation has no real roots." << endl;
    }

    //end of program
    return 0;
}
