// Write a program to find area of a rectangle.(Area=l*b)

#include <iostream>
#include <cstdlib>
using namespace std;

void areaOfRectangle(int len, int bre)
{
   int area = len * bre;
   std::cout << "Area of Rectangle is: " << area << std::endl;
}

int main()
{
   system("CLS");
   int length = 25;
   int breadth = 15;

   areaOfRectangle(length, breadth);
   return 0;
}