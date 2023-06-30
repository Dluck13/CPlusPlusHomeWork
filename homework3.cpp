/*
Student Name: Dimitri Luck
Program Description: This program coverts celsius to fahrenheit
Date Submitted: 2/22/2023
*/

#include <iostream>
using namespace std;

int main() {
    //declare variables
    double celsius, fahrenheit;
    //get users input
    cout << "Enter temperature in Celsius: ";
    //read input
    cin >> celsius;
    
    // Convert Celsius to Fahrenheit using the formula: F = (9/5)*C + 32
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    
    // Display the result
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    return 0;
}
