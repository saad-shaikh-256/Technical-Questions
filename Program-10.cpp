// Write a program in C to find the Circumference of a circle.(2*pi*r)

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");
   float PI = 3.14;
   float radius = 12;

   float CircumferenceOfCircle = 2 * PI * radius;

   cout << "Circumference of Circle is: " << CircumferenceOfCircle << std::endl;

   return 0;
}