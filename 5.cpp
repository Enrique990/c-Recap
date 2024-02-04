//Write a program to find the sum of even numbers and the product of odd numbers in a vector

#include<iostream>
#include<vector>
using namespace std;

int addition = 0;
int product = 1;

int main(int argc, char const *argv[])
{
    vector<int> vector = {1,2,3,4,5,6,7,8};

    for (int i = 0; i < vector.size(); i++)
    {
        if (vector[i]%2 == 0)
        {
            addition = addition + vector[i];
        }else
        product = product * vector[i];
    }


    cout << "Sum of even numbers is: " << addition << "\n";
    cout << "Product of odd numbers is: " << product << "\n";
    return 0;
}
