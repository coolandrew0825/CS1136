// Lab 9 Exercise 3
// Currency conversions 
//
// Program by: Andrew Chen
#include <iostream>
#include <iomanip>

using namespace std;
// This program will get an amount in US dollars and convert it 
// to another currency

// global variables
double valueOfYen = 104.75;
double valueOfPesos = 13.07;
double valueOfEuros = 0.77;

// Prototypes of the convertToYen function
float convertToYen(float dollars);

// Prototypes of the convertTOEuroAndPesos function
void convertToEurosAndPesos(float dollars, float &euros, float &pesos);

int main()
{
   // declare variables
   float dollars, euros, pesos, yen;

   cout << fixed << showpoint << setprecision(2);
   cout << "Please input the amount of US Dollars "
      << "you want converted: ";
   cin >> dollars;

   //  Fill in the code to convert to yen, euros, and pesos
   // and display the results

   // call convertToYen function
   yen = convertToYen(dollars);
   convertToEurosAndPesos(dollars,euros,pesos);

   // print out the results
   cout << "The value of " << dollars << " Dollars is:" << endl;
   cout << yen << " Yen." << endl;
   cout << euros << " Euros" << endl;
   cout << pesos << " Pesos" << endl;

   system("pause");
   return 0;
} // end of main function

float convertToYen(float dollars)
{
   // declare and initialize variable
   double yen = 0.0;

   // convert dollar to yen
   yen = dollars * valueOfYen;

   // return yen
   return yen;
} // end of convertToYen function

void convertToEurosAndPesos(float dollars, float &euros, float &pesos)
{
   // calculate euros and pesos
   euros = dollars * valueOfEuros;
   pesos = dollars * valueOfPesos;
} // end of convertToEuroAndPEsos function