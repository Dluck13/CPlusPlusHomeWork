#include <iostream>
/*
Student Name: Dimitri Luck
Program Description: Future Value
Date Submitted: 04/12/2023
*/

#include <cmath>

using namespace std;

// Funtion for futureInvestmentValue
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int months) {
    double futureValue = investmentAmount * (1+(pow(monthlyInterestRate, months)));
    return futureValue;
}

int main() {
    double investmentAmount, monthlyInterestRate;
    int months;
    // Input investment amount
    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    // Input interest rate
    cout << "Enter monthly interest rate as a decimal: ";
    cin >> monthlyInterestRate;
    //Input months
    cout << "Enter number of months: ";
    cin >> months;
    // Function call
    double futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, months);

    cout << "Future value is: " << futureValue << endl;
    // Return Value
    return 0;
}