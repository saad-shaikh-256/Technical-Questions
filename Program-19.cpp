// Write a C program to convert angle in degrees to radians using formula angle in radians = (angle in degrees * ∏) / 180.

#include <iostream>
#include <cstdlib>
using namespace std;

void degreeToRadian()
{
   float degree;
   std::cout << "Enter angle of degrees: ";
   std::cin >> degree;

   float pi = 3.14159;

   float radian = (degree * pi) / 180;
   std::cout << "\nThe angle in radians is: " << radian << " rad" << std::endl;
}
int main()
{
   system("CLS");
   degreeToRadian();

   return 0;
}