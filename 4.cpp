/*Write a leap_year.cpp program that:

*Takes a year as input.
*Checks to see if the year is a four-digit number.
*Displays whether or not the year falls on a leap year.

There are 3 criteria that must be taken into account to identify a leap year:

*If the year can be evenly divided by 4 then it is a leap year, however…
*If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
*If that year is evenly divisible by 400, then it is a leap year.*/

#include <iostream>
using namespace std;

int year;

int main(int argc, char const *argv[])
{
    cout << "Enter a year: ";
    cin >> year;

    if (year < 1000 || year >9999)
    {
        cout << "This program only works with 4-digit numbers";
    }
    else if (year %4 == 0 && year %100 != 0 || year %400 == 0)
    {
        cout << year << " is a leap year";
    }
    else cout << year << " is not a leap year";
    
    return 0;
}