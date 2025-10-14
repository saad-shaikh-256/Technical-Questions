// Write a program to find area of a rectangle.(Area=l*b)

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");
   int length = 25;
   int breadth = 15;
   int area = length * breadth;

   std::cout << "Area of a rectangle is: " << area << std::endl;
   return 0;
}