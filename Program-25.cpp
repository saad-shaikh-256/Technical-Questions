// Write a program to arrange any three numbers in ascending order.

#include <iostream>
#include <cstdlib>
using namespace std;

void threeNumber()
{
   float num1;
   std::cout << "Enter 1st Number: ";
   std::cin >> num1;

   float num2;
   std::cout << "Enter 2nd Number: ";
   std::cin >> num2;

   float num3;
   std::cout << "Enter 3rd Number: ";
   std::cin >> num3;

   float first, second, third;

   if (num1 <= num2 && num1 <= num3)
   {
      first = num1;
      if (num2 <= num3)
      {
         second = num2;
         third = num3;
      }
      else
      {
         second = num3;
         third = num2;
      }
   }
   else if (num2 <= num1 && num2 <= num3)
   {
      first = num2;
      if (num1 <= num3)
      {
         second = num1;
         third = num3;
      }
      else
      {
         second = num3;
         third = num1;
      }
   }
   else
   {
      first = num3;
      if (num1 <= num2)
      {
         second = num1;
         third = num2;
      }
      else
      {
         second = num2;
         third = num1;
      }
   }
   std::cout << "Numbers in Ascending Order: " << first << ", " << second << ", " << third << std::endl;
}
int main()
{
   system("CLS");
   threeNumber();

   return 0;
}