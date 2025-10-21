// Write a program to calculate area of circle.(pi *r *r)

#include <iostream>
#include <cstdlib>
using namespace std;

void areaOfCircle(float radius)
{
   float PI = 3.14;
   float AreaOfCircle = PI * radius * radius;
   std::cout << "Area of Circle is: " << AreaOfCircle << std::endl;
}

int main()
{
   system("CLS");

   float PI = 3.14;
   float radius = 12;
   areaOfCircle(radius);

   return 0;
}