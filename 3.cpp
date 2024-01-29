/*Little Mac is an interplanetary space boxer, who is trying to win championship belts 
for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

1. It should ask him what his earth weight is.
2. Ask him to enter a number for the planet he wants to fight on.
3. It should then compute his weight on the destination planet.*/


#include <iostream>
using namespace std;

float weight, finalWeight;
int number;

float MercuryG = 3.7;
float VenusG = 8.87;
float EarhtG = 9.8;
float MarsG = 3.71;
float JupiterG = 24.79;
float SaturnG = 10.44;
float UranusG = 8.87;
float NeptuneG = 11.15;

int main(int argc, char const *argv[])
{
    cout << "Tell me your weight on planet earth in KG: ";
    cin >> weight;

    cout << "---Enter the number of the planet you want to fight on---\n" << endl;
    cout << "1. Mercury" << endl;
    cout << "2. Venus" << endl;
    cout << "3. Mars" << endl;
    cout << "4. Jupiter" << endl;
    cout << "5. Saturn" << endl;
    cout << "6. Uranus" << endl;
    cout << "7. Neptune\n" << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        finalWeight = weight * MercuryG / EarhtG;
        cout << "You weight in Mercury is: " << finalWeight << " KG" ;
        break;
    case 2:
        finalWeight = weight * VenusG / EarhtG;
        cout << "Your weight in Venus is: " << finalWeight << " KG";
        break;
    case 3:
        finalWeight = weight * MarsG / EarhtG;
        cout << "Your weight in Mars is: " << finalWeight << " KG";
        break;
    case 4:
        finalWeight = weight * JupiterG / EarhtG;
        cout << "Your weight in Jupiter is: "<< finalWeight << " KG";
        break;
    case 5:
        finalWeight = weight * SaturnG / EarhtG;
        cout << "Your weight in Saturn is: " << finalWeight << " KG";
        break;
    case 6:
        finalWeight = weight * UranusG / EarhtG;
        cout << "Your weight in Uranus is: " << finalWeight << " KG";
        break;
    case 7:
        finalWeight = weight * NeptuneG / EarhtG;
        cout << "Your weight in Neptune is: " << finalWeight << " KG";
        break;
    default:
        cout << "The planet doesn't exist in the list";
        break;
    }
    return 0;
}
