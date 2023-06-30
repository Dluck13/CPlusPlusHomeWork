#include <iostream>
/*
Student Name: Dimitri Luck
Program Description: Determine runway length
Date Submitted: 2/22/2023
*/

#include <cmath>
using namespace std;

int main() {
    double takeoff_speed, acceleration, runway_length;

    //enter take-off speed and acceleration
    cout << "Enter the take-off speed in m/s: ";
    cin >> takeoff_speed;
    cout << "Enter the acceleration in m/s^2: ";
    cin >> acceleration;

    //Calculate runway length with formula
    runway_length = pow(takeoff_speed, 2) / (2 * acceleration);

    // Display the result
    cout << "The minimum runway length required for take-off is " << runway_length << " meters." << endl;
    return 0;
}