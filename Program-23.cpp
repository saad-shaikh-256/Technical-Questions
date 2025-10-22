// Write a program to Find out Maximum number among two numbers.

#include <iostream>
#include <cstdlib>
using namespace std;

void maximumNumber()
{
   float num1;
   std::cout << "Enter 1st Number: ";
   std::cin >> num1;

   float num2;
   std::cout << "Enter 2nd Number: ";
   std::cin >> num2;

   if (num1 > num2)
   {
      std::cout << num1 << " is bigger than " << num2 << std::endl;
   }
   else if (num2 > num1)
   {
      std::cout << num2 << " is bigger than " << num1 << std::endl;
   }
   else
   {
      std::cout << "Both numbers are equal." << std::endl;
   }
}

int main()
{
   system("CLS");
   maximumNumber();

   return 0;
}