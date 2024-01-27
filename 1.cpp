//Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.

#include <iostream>
using namespace std;

int main() {
  int weight;
  double weightM;

  cout << "Introduce a weight in kg: ";
  cin >> weight;
  weightM = weight * 0.37;
  cout << weight << " KG" << " in Mars are: " << weightM << " KG";

  return 0;
}