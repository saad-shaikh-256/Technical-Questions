// Write a program to add, multiply and divide two integers and float numbers.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   system("CLS");

   int num1 = 55, num2 = 5;
   // Integer operations
   std::cout << "===== \t Integer Operations \t ===== \n"
             << std::endl;
   std::cout << "Num-1 is: 55" << std::endl;
   std::cout << "Num-2 is: 5" << std::endl;

   // Addition
   std::cout << "\nAddition of " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;

   // Division
   std::cout << "Division of " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;

   // Multiplication
   std::cout << "Multiplication of " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;

   float f1 = 10.5, f2 = 2.5;

   std::cout << "Num-1 is: 10.5" << std::endl;
   std::cout << "Num-2 is: 2.5" << std::endl;
   // Float operations
   std::cout << "\n===== \t Float Operations \t ===== \n"
             << std::endl;

   // Addition
   cout << "Addition of " << f1 << " + " << f2 << " = " << f1 + f2 << endl;

   // Division
   cout << "Division of " << f1 << " / " << f2 << " = " << f1 / f2 << endl;

   // Multiplication
   cout << "Multiplication of " << f1 << " * " << f2 << " = " << f1 * f2 << endl;

   return 0;
}