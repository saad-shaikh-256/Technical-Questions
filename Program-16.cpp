// Write  a  C  program to find out compound interest using following formula Compound Interest  = P * ( 1 + r / 100 ) n  - P.

#include <iostream>
#include <cstdlib>
#include <Math.h>
using namespace std;

void compoundInterest()
{
   float P;
   std::cout << "Enter principal amount: ";
   std::cin >> P;

   float r;
   std::cout << "Enter rate of interest: ";
   std::cin >> r;

   float n;
   std::cout << "Enter time period: ";
   std::cin >> n;

   float CI;
   CI = P * (pow((1 + r / 100), n)) - P;
   cout << "Compound Interest is: " << CI << endl;
}
int main()
{
   system("CLS");
   compoundInterest();
   return 0;
}