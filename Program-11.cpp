// Write a program in C to calculate simple interest using formula SI = (P*R*N) / 100

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");

   std::cout << "=== Simple Interest ===" << std::endl;

   float primaryAmount;
   std::cout << "Enter Amount: ";
   cin >> primaryAmount;

   float rateOfInterest;
   std::cout << "Enter Interest: ";
   cin >> rateOfInterest;

   float timePeriod;
   std::cout << "Enter Duration(Years): ";
   cin >> timePeriod;

   float simpleInterest = (primaryAmount * rateOfInterest * timePeriod) / 100;

   std::cout << "Simple Interest is: " << simpleInterest << std::endl;
   return 0;
}