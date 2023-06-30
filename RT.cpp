/*
Student Name: Dimitri Luck
Program Description: perform math operations on random.txt
Date Submitted: 3/29/2023
*/


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    ifstream infile("random.txt");
    int num, count = 0, sum = 0;

    if (!infile) {
        cerr << "Error: Unable to open the file." << endl;
        exit(1);
    }

    while (infile >> num) {
        count++;
        sum += num;
    }

    infile.close();

    double average = static_cast<double>(sum) / count;

    cout << "The number of numbers in the file: " << count << endl;
    cout << "The sum of all the numbers in the file: " << sum << endl;
    cout << "The average of all the numbers in the file: " << average << endl;

    return 0;
}





