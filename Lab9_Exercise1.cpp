#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
// Print out the program description
void printDescription();
// Calculate gross pay
float computeGrossPay(float, int);
// Calculate net pay
float computeNetPay(float);

int main()
{
   // variables for 
   float payRate;
   float grossPay;
   float netPay;
   int hours;

   cout << setprecision(2) << fixed;
   cout << "Welcome to the Pay Roll Program" << endl;

   printDescription(); // Call to Description function

   // Get the pay rate and number of hours from the user
   cout << "Please input the pay per hour: ";
   cin >> payRate;

   cout << endl << "Please input the number of hours worked: ";
   cin >> hours;

   cout << endl << endl;

   // get the gross pay
   grossPay = computeGrossPay(payRate, hours);

   // get the net pay
   netPay = computeNetPay(grossPay);

   // Fill in the code to display grossPay and to calculate 
   // and display netPay – use the computeNetPay function to 
   // calculate the net pay. 

   // print out statements
   cout << "Your gross pay is $" << fixed << setprecision(2) << grossPay << endl;
   cout << "Your net pay is $" << fixed << setprecision(2) << netPay << endl;
   cout << "\nWe hope you enjoyed this program" << endl;

   system("pause");
   return 0;
} // end of main function

// ********************************************************************
// printDescription
// 
// task: This function prints a program description
// data in: none
// data out: none
//
// ********************************************************************
void printDescription() //The function heading
{
   cout << endl;
   cout << "*************************************************" << endl;
   cout << "This program takes two numbers (pay rate & hours)"
      << endl;
   cout << "and multiplies them to get gross pay. The program "
      << endl;
   cout << "then calculates net pay by subtracting 15%" << endl;
   cout << "*************************************************" << endl
      << endl;
} // end of printDescription function


// *********************************************************************
// computeGrossPay
// 
// task: This function takes rate and time and multiples them to
// get gross pay.
// data in: pay rate and time in hours worked
// data out: the gross pay
//
// ********************************************************************
float computeGrossPay(float rate, int time)
{
   // Fill in the code to find gross pay
   // declare and initialize variable
   double grossPay = 0.0;

   // calculate grossPay
   grossPay = time * rate;

   // return grossPay
   return grossPay;
} // end of computeGrossPay

// *********************************************************************
// computeNetPay
// 
// task: This function takes the gross pay and reduces it by 15%
// 
// data in: gross pay
// data out: the net pay
//
// ********************************************************************
float computeNetPay(float gross)
{
   // Fill in the code to compute netPay
   // declare and initialize variable
   double netPay = 0.0;

   // calculate netPay
   netPay = gross * 0.85;

   // return netPay
   return netPay;
} // end of computeNetPay function
