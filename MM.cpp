/*
Student Name: Dimitri Luck
Program Description: milimeter double 1-99 
Date Submitted: 3/29/2023
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Millimeters\tInches\n";
    for(int mm = 2; mm <= 98; mm += 2) {
        double inches = mm * 0.039;
        cout << mm << "\t\t" << inches << endl;
    }
    return 0;
}
