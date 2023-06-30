/*
Student Name: Dimitri Luck
Program Description: this program calculates the area of different shapes
Date Submitted: 03/10/2023
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    //decalre variables
    int choice;
    double radius, length, width, base, height, area;

    do {
        //menu options for calculator will execute 
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        

        //switch statement that allows you to choose a case option
        switch (choice) {

            //case option for area of a circle
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Error: Radius cannot be negative" << endl;
                } else {
                    area = M_PI * pow(radius, 2);
                    cout << "The area of the circle is " << area << endl;
                }
                break;

            //case options for the are of a rectangle
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                if (length < 0 || width < 0) {
                    cout << "Error: Length and width cannot be negative" << endl;
                } else {
                    area = length * width;
                    cout << "The area of the rectangle is " << area << endl;
                }
                break;
            
            //case option for area of a triangle
            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                if (base < 0 || height < 0) {
                    cout << "Error: Base and height cannot be negative" << endl;
                } else {
                    area = 0.5 * base * height;
                    cout << "The area of the triangle is " << area << endl;
                }
                break;
            
            //option to exit menu
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Error: Invalid choice. Please enter a number from 1 to 4." << endl;
                break;
        }
    } while (choice != 4);


    //end of program
    return 0;
}
