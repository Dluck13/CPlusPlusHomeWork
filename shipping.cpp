/*
Student Name: Dimitri Luck
Program Description: calculate shipping cost 
Date Submitted: 03/10/2023
*/


#include <iostream>
using namespace std;

int main() {
  // Constants for shipping rates per 500 miles
  const double RATE_1 = 1.10;
  const double RATE_2 = 2.20;
  const double RATE_3 = 3.70;
  const double RATE_4 = 4.80;

  // Variables for weight and distance
  double weight, distance;

  // Get weight and distance from user
  cout << "Enter the weight of the package in kilograms: ";
  cin >> weight;
  cout << "Enter the distance to be shipped in miles: ";
  cin >> distance;

  // Check for invalid inputs
  if (weight <= 0 || weight > 20) {
    cout << "Invalid weight. Please enter a weight between 0 and 20 kg." << endl;
    return 0;
  }
  if (distance < 10 || distance > 3000) {
    cout << "Invalid distance. Please enter a distance between 10 and 3000 miles." << endl;
    return 0;
  }

  // Calculate shipping charges
  double rate = 0.0;
  if (weight <= 2) {
    rate = RATE_1;
  } else if (weight <= 6) {
    rate = RATE_2;
  } else if (weight <= 10) {
    rate = RATE_3;
  } else {
    rate = RATE_4;
  }
  double charges = (distance / 500.0) * rate;

  // Display shipping charges
  cout << "The shipping charges for a " << weight << " kg package shipped " << distance << " miles are $" << charges << "." << endl;

  return 0;
}
