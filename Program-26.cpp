#include <iostream>
#include <cstdlib>
using namespace std;

void leapYear()
{
   int year;
   std::cout << "Enter Year: ";
   std::cin >> year;

   if (year % 4 == 0)
   {
      std::cout << year << " is a leap Year" << std::endl;
   }
   else
   {
      std::cout << year << " not a leap Year" << std::endl;
   }
}

int main()
{
   system("CLS");
   leapYear();
   return 0;
}