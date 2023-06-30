/*
Student Name: Dimitri Luck
Program Description: This program calculates your BMI
Date Submitted: 2/26/2023
*/





#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //unit conversions
    const double INCHES_TO_METERS = 0.0254;
    const double POUNDS_TO_KILOGRAMS = 0.45359237;

    //declare variables
    int feet, inches;
    double weight;

    //input height and weight
    cout << "Enter your height (feet inches): ";
    cin >> feet >> inches;
    cout << "Enter your weight (pounds): ";
    cin >> weight;

    //cnversion to metric 
    double height_meters = (feet * 12 + inches) * INCHES_TO_METERS;
    double weight_kg = weight * POUNDS_TO_KILOGRAMS;

    // Calculate the BMI
    double bmi = weight_kg / (height_meters * height_meters);

    // Output the BMI
    cout << fixed << setprecision(1);
    cout << "Your BMI is " << bmi << ", which is ";
    if (bmi < 18.5) {
        cout << "underweight.";
    } else if (bmi < 25) {
        cout << "normal.";
    } else if (bmi < 30) {
        cout << "overweight.";
    } else {
        cout << "obese.";
    }
    cout << endl;
    


    //table for BMI information
    cout << setw(14) << left << "BMI CATEGORIES TABLE" << endl;
    cout << setw(14) << left << "------------------------------" << endl;
    cout << setw(14) << left << "BMI Category" << "BMI Range" << endl;
    cout << setw(14) << left << "------------------------------" << endl;
    cout << setw(14) << left << "Underweight" << "<18.5" << endl;
    cout << setw(14) << left << "Normal weight" << "18.5 to 24.9" << endl;
    cout << setw(14) << left << "Overweight" << "25 to 29.9" << endl;
    cout << setw(14) << left << "Obesity" << "BMI of 30 or greater" << endl;

   


    return 0;

    
}
