// Write a C program to read a floating point number from user and then display the right most digit of the integral part of the number.
#include <iostream>
#include <cstdlib>
using namespace std;

void rightMostDigit()
{
   float num;
   std::cout << "Enter an number(Float): ";
   std::cin >> num;

   int convertToInteger = (int)num;
   if (convertToInteger > 0)
   {
      int rightMostDigit = convertToInteger % 10;
      std::cout << "Right most digit of Integer part: " << rightMostDigit << std::endl;
   }
   else
   {
      std::cout << "The number can't be Negative" << std::endl;
   }
}

int main()
{
   system("CLS");

   rightMostDigit();
   return 0;
}