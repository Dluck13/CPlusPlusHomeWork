/*
Student Name: Dimitri Luck
Program Description: Determine distance between two points
Date Submitted: 2/22/2023
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, distance;

    // enter two points
    cout << "Enter the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the second point (x2, y2): ";
    cin >> x2 >> y2;

    // Calculate the distance between the two points using the given formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    cout << "The distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << distance << endl;
    return 0;
}