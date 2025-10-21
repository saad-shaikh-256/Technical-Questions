// Write a C program to read the distance between two cities in KM. and print that distance in meters, feet, inches and centimeters.

#include <iostream>
#include <cstdlib>
using namespace std;

void distanceBetweenCities()
{
   float kilo;
   std::cout << "Enter the distance(KM):";
   std::cin >> kilo;

   float meter = kilo * 1000;
   std::cout << "\nThe distance in meters is: " << meter << " m" << std::endl;

   float feet = kilo * 3280.84;
   std::cout << "The distance in feet is: " << feet << " ft" << std::endl;

   float inches = kilo * 39370.1;
   std::cout << "The distance in inches is: " << inches << " in" << std::endl;

   float centimeters = kilo * 100000;
   std::cout << "The distance in centimeters is: " << centimeters << " cm" << std::endl;
}

int main()
{
   system("CLS");
   distanceBetweenCities();
   return 0;
}