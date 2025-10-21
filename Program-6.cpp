// Write a program to find area of triangle.(Area=(l*b)/2)

#include <iostream>
#include <cstdlib>
using namespace std;

void areaOfTriangle(int len, int bre)
{
   int area = (len * bre) / 2;
   std::cout << "Area of a triangle is: " << area << std::endl;
}
int main()
{
   system("CLS");

   int length = 10, breadth = 15;
   areaOfTriangle(length, breadth);

   return 0;
}