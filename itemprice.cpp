#include <iostream>
using namespace std;

/*
Student Name: Dimitri Luck
Program Description: Calculate retail price
Date Submitted: 04/12/2023
*/

// Function to calculate the retail price
double calculateRetail(double wholesaleCost, double markupPercentage)
{
    double markupAmount = wholesaleCost * markupPercentage / 100.0;
    double retailPrice = wholesaleCost + markupAmount;
    return retailPrice;
}

int main()
{
    // Input wholesale cost and markup percentage
    double wholesaleCost, markupPercentage;
    cout << "Enter the wholesale cost: ";
    cin >> wholesaleCost;
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    // Validate input
    if (wholesaleCost < 0 || markupPercentage < 0) {
        cout << "Error: Wholesale cost and markup percentage must be positive." << endl;
        return 1; // Exit with error code
    }

    // Calculate and display the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The retail price is: " << retailPrice << endl;

    return 0; // Exit success
}