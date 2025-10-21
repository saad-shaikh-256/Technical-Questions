// Write a program in C to display sum from 1 to N using the formula N(N + 1) / 2.
#include <iostream>
#include <cstdlib>
using namespace std;

void sumFrom1ToN(int N)
{
   int sum = (N * (N + 1)) / 2;
   std::cout << "Sum from 1 to " << N << " is: " << sum << std::endl;
}

int main()
{
   system("CLS");

   int N;
   std::cout << "Enter a number: ";
   std::cin >> N;

   sumFrom1ToN(N);
   return 0;
}