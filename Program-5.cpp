// Write a program to find volume of cube.(Area=l*b*h)

#include <iostream>
#include <cstdlib>
using namespace std;

void volumeOfCube(int len, int bre, int hei)
{
   int volume = len * bre * hei;
   std::cout << "Volume of Cube is: " << volume << std::endl;
}

int main()
{
   system("CLS");
   int length = 10, breadth = 15, height = 20;
   volumeOfCube(length, breadth, height);
   
   return 0;
}