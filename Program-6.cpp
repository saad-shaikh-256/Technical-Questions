// Write a program to find area of triangle.(Area=(l*b)/2)

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");

   int length = 10, breadth = 15;
   int area = (length * breadth) / 2;

   std::cout << "Area of a triangle is: " << area << std::endl;
   return 0;
}