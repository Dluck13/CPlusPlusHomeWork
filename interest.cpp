/*
Student Name: Dimitri Luck
Program Description: Calculate interest in a year 
Date Submitted: 2/22/2023
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal, interestRate, balance;
    int timesCompounded;
    
    // input the principal, interest rate, and number of times compounded
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the interest rate (as a decimal): ";
    cin >> interestRate;
    cout << "Enter the number of times the interest is compounded: ";
    cin >> timesCompounded;

    // Calculate the balance in the savings account after one year using the given formula
    balance = principal * pow(1 + (interestRate / timesCompounded), timesCompounded);

    // Display the result in the given report format
    cout << fixed << setprecision(2);
    cout << "Interest rate: " << setw(20) << interestRate * 100 << "%" << endl;
    cout << "Times compounded: " << setw(16) << timesCompounded << endl;
    cout << "Principal: " << setw(21) << "$" << principal << endl;
    cout << "Interest: " << setw(22) << "$" << balance - principal << endl;
    cout << "Balance: " << setw(23) << "$" << balance << endl;
    return 0;
}





