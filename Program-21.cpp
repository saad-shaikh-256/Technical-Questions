// Write a C program to read a price of an item in (float) like 10.25   and print output in (int) paisa like1025.

#include <iostream>
#include <cstdlib>
using namespace std;

void priceInPaisa()
{
   float price;
   std::cout << "Enter price of item (in float): ";
   std::cin >> price;

   int paisa = (int)(price * 100);
   std::cout << "\nThe price in paisa is: " << paisa << " paisa" << std::endl;
}

int main()
{
   system("CLS");
   priceInPaisa();
   return 0;
}