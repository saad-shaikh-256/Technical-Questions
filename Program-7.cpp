// Write a program in C to convert the given temperature from Fahrenheit to Celsius using the formula C = (F – 32) / 1.8

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");
   float Fahrenite = 90;

   float ConversionToCelsius = (Fahrenite - 32) / 1.8;

   std::cout << "Conversion of Fahrenite to Celsius is: " << ConversionToCelsius << std::endl;

   return 0;
}