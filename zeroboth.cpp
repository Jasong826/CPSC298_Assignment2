/*
Jason Song
CPSC 298 interterm
Assignment 2
Problem 3
*/

#include <iostream>

using namespace std;

//This void function will set its parameters to zero
void zeroBoth (int& num1, int& num2) {
  num1 = 0;
  num2 = 0;
}

//this main function will prompt the user for input and call the zerBoth function to zero both of the users inputs
int main()  {

  //intialize variables
  int num1;
  int num2;

  //prompt the user for 2 numbers
  cout << "Please input 2 numbers of your choice: " << endl;
  cin >> num1;
  cin >> num2;

  //call the zeroBoth function to change the value of the inputs
  zeroBoth(num1, num2);

  //output the results
  cout << "Your inputs after the using the zeroboth function: " << num1 << " and " << num2 << endl;

  return 0;
}
