/* 
   Student Name: Dimitri Luck
   Program Description:  This program tells how much paint you need
   for two coats on calculated fenceArea
   Date Submitted: 02/07/2023
 
*/ 

#include <iostream>
// Declare variables
int main() {
   double fenceLength = 100.0;
   double fenceHeight = 6.0;
   double fenceArea = fenceLength * fenceHeight;
   double paintPerGallon = 340.0;
   double gallonsNeeded;
   
   //Calculate gallons needed for two coats
   gallonsNeeded = 2 * fenceArea / paintPerGallon;
   
   //print output
   std::cout << "Approximately " << gallonsNeeded << " gallons of paint will be needed to paint two coats on the fence." << std::endl;
   
   return 0;
}
