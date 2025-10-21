// Write a C program to find out the area of right angle triangle using formula area = ½ * base * height.

#include <iostream>
#include <cstdlib>
using namespace std;

void areaOfRightAngleTringle()
{
   float base;
   std::cout << "Enter base: ";
   std::cin >> base;

   float height;
   std::cout << "Enter height: ";
   std::cin >> height;

   float area;
   area = 0.5 * base * height;
   cout << "Area of right angle triangle is: " << area << endl;
}

int main()
{
   system("CLS");
   areaOfRightAngleTringle();
   return 0;
}