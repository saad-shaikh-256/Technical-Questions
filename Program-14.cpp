// Write a C program to obtain an hourly pay rate and the number of hours worked by workers. Calculate their pay for the week.

#include <iostream>
#include <cstdlib>
using namespace std;

void hourlyPayCalculator()
{
   double hourlyRate;
   std::cout << "Enter Hourly Rate: ";
   cin >> hourlyRate;

   double hoursWorked;
   std::cout << "Enter Hours Worked: ";
   cin >> hoursWorked;

   double weeklyPay = hourlyRate * hoursWorked;
   std::cout << "Weekly Pay: " << weeklyPay << std::endl;
}
int main()
{
   system("CLS");
   hourlyPayCalculator();
   return 0;
}