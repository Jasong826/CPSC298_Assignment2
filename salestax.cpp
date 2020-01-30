/*
Jason Song
CPSC 298 interterm
Assignment 2
Problem 4
*/

#include <iostream>

using namespace std;

//This function will return a float of the cost after the tax rate.

float addTax (float &taxRate, float &cost)  {
  taxRate = taxRate/100;  //convert the percent into decimal
  cost = cost + (taxRate*cost);
  return cost;
}

int main()  {
  //intialize variables
  float taxRate;
  float cost;

  //prompt user for cost and taxRate
  cout << "Please input the cost of the item: " << endl;
  cin >> cost;
  cout << "Please input the percentage of the rate of tax: " << endl;
  cin >> taxRate;

  cout << "The cost of the item after tax is: $" << addTax(taxRate,cost) << endl;

}
