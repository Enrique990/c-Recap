//Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float miles,kilometers;
    cout << "Enter a distance in miles: ";
    cin >> miles;
    
    kilometers = miles * 1.609;

    cout << miles << " miles" << " are " << kilometers << " kilometers";
    return 0;
}
