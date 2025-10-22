// Write a program to Check whether given number is positive, negative or zero.

#include <iostream>
#include <cstdlib>
using namespace std;

void checkNumber()
{
   float num;
   std::cout << "Enter Number: ";
   std::cin >> num;

   if (num > 0)
      std::cout << "The number is positive." << std::endl;
   else if (num < 0)
      std::cout << "The number is negative." << std::endl;
   else
      std::cout << "The number is zero." << std::endl;
}

int main()
{
   system("CLS");
   checkNumber();

   return 0;
}