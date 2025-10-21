// Write a program in C to convert the given temperature from Fahrenheit to Celsius using the formula C = (F – 32) / 1.8

#include <iostream>
#include <cstdlib>
using namespace std;

void fahrenheitToCelsius(float fah)
{
   float ConversionToCelsius = (fah - 32) / 1.8;
   std::cout << "Conversion of Fahrenite to Celsius is: " << ConversionToCelsius << std::endl;
}

int main()
{
   system("CLS");
   float Fahrenite = 0;
   std::cout << "Enter Temprature(Fahrenheit): ";
   std::cin >> Fahrenite;
   fahrenheitToCelsius(Fahrenite);

   return 0;
}