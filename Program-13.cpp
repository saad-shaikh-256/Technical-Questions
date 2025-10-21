// Write a program that reads the radius of sphere “r”, then it calculates its volume “V”  and surface area “A” using formulas. (pi*r*r*4)/3

#include <iostream>
#include <cstdlib>
using namespace std;

void radiusOfSphere(double r, int pi)
{
   double V = (4.0 / 3.0) * pi * r * r * r;
   double A = 4 * pi * r * r;

   std::cout << "Volume of the sphere is: " << V << std::endl;
   std::cout << "Surface area of the sphere is: " << A << std::endl;
}
int main()
{
   system("CLS");

   double r;
   std::cout << "Enter the radius of the sphere: ";
   std::cin >> r;

   float pi = 3.14;
   radiusOfSphere(r, pi);
   return 0;
}