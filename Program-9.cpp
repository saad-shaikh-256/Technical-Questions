// Write a program to calculate area of circle.(pi *r *r)

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");

   float PI = 3.14;
   float radius = 12;

   float AreaOfCircle = PI * radius * radius;

   cout << "Area of Circle is: " << AreaOfCircle << std::endl;

   return 0;
}