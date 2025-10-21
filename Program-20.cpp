// Write a program to accept number of days and print year, month and remaining days.

#include <iostream>
#include <cstdlib>
using namespace std;

void numberOfDays()
{
   int day;
   std::cout << "Enter number of days: ";
   std::cin >> day;

   int year = day / 365;
   int leftoverDays = day % 365;

   int month = leftoverDays / 30;
   int remainingDays = leftoverDays % 30;

   cout << year << " year(s), " << month << " month(s), " << remainingDays << " day(s)" << endl;
}

int main()
{
   system("CLS");
   numberOfDays();
   return 0;
}