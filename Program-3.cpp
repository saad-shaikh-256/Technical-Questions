// Write a program to add, multiply and divide two integers and float numbers.
#include <iostream>
#include <cstdlib>
using namespace std;

void intergerOperation(int a, int b)
{
   std::cout << "===== \t Integer Operations \t ====="
             << std::endl;

   // Addition
   std::cout << "\n"
             << a << " + " << b << " = " << a + b << "\t (Addition)" << std::endl;

   // Division
   std::cout << a << " / " << b << " = " << a / b << "\t (Division)" << std::endl;

   // Multiplication
   std::cout << a << " * " << b << " = " << a * b << "\t (Multiplication)" << std::endl;
}

void floatOperation(int a, int b)
{
   std::cout << "\n===== \t Float Operations \t ====="
             << std::endl;

   // Addition
   std::cout << "\n"
             << a << " + " << b << " = " << a + b << "\t (Addition)" << std::endl;

   // Division
   std::cout << a << " / " << b << " = " << a / b << "\t (Division)" << std::endl;

   // Multiplication
   std::cout << a << " * " << b << " = " << a * b << "\t (Multiplication)" << std::endl;
}

int main()
{
   system("CLS");

   int int1 = 55, int2 = 5;
   intergerOperation(int1, int2);

   float flo1 = 10.5, flo2 = 2.5;
   floatOperation(flo1, flo2);

   return 0;
}