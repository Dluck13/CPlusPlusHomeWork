/*
Student Name: Dimitri Luck
Program Description: Matrix
Date Submitted: 04/12/2023
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printMatrix(int n) {
    srand(time(0));  // seed the random number generator with current time
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value = rand() % 2;  // generate a random value of 0 or 1
            cout << value << " ";
        }
        cout << endl;
    }
}
//Call the main method
int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    printMatrix(n);
    return 0;
}
