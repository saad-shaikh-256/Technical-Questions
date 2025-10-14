// Write a program convert temperature from Celsius to Fahrenheit where temperature in Celsius is entered by user.(C = 5 / 9(f – 32))

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");

   float Celsius;
   std::cout << "Enter Temperature (Celsius): ";
   cin >> Celsius;

   float ConversionToFahrenheit = (Celsius * 9 / 5) + 32;

   std::cout << "Conversion of Celsius to Fahrenite is: " << ConversionToFahrenheit << std::endl;
   return 0;
}