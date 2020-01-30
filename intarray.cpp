/*
Jason Song
CPSC 298 interterm
Assignment 2
Problem 1
*/

#include <iostream>

using namespace std;

//This main function will read ten nonnegative integers and output them from an array.

int main()
{
  //initialize variables
  int numberArray[10];
  int userNum;
  int i = 0;
  //while the array list is not full
  while (i < 10) {
    cout << "Please input an integer: ";
    cin >> userNum;
    //input the user input if it is positive
    if (userNum > 0)  {
      numberArray[i] = userNum;
      ++i;
    }
  }

  //output each element of the aray
  for (int j = 0; j < i; ++j) {
    cout << numberArray[j] <<endl;
  }

  return 0;

}
