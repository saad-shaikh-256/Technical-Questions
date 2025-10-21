// Write a C program to read number and display in the form of Hour, Min and Seconds.

#include <iostream>
#include <cstdlib>
using namespace std;

void convertTime()
{
   int totalSeconds;
   cout << "Enter number of seconds: ";
   cin >> totalSeconds;

   int hours = totalSeconds / 3600;
   int remainingSeconds = totalSeconds % 3600;

   int minutes = remainingSeconds / 60;
   int seconds = remainingSeconds % 60;

   cout << hours << " hour(s), " << minutes << " minute(s), " << seconds << " second(s)" << endl;
}

int main()
{
   system("CLS");

   convertTime();
   return 0;
}