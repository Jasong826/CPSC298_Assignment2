/*
Jason Song
CPSC 298 interterm
Assignment 2
Problem 2
*/

#include <iostream>

using namespace std;

//This main function will fill an array that is 5 columns and 4 rows.

int main()  {
  //initialize variables
  int i;
  int j;
  const int NUM_COLS = 5;
  const int NUM_ROWS = 4;
  int userInput;
  int a[NUM_ROWS][NUM_COLS];

  //prompt user to enter in at least 20 numbers
  cout << "Enter in 20 numbers with spaces in between: " << endl;

  //use nested for loops to input the inputs into the array
  for (j = 0; j < NUM_ROWS; ++j)  {
    for (i = 0; i < NUM_COLS; ++i) {
      cin >> userInput;
      a[j][i] = userInput;
    }
  }

  //use nested loops again to output the elements in the array
  for (j = 0; j < NUM_ROWS; ++j)  {
    cout << endl;
    for (i = 0; i < NUM_COLS; ++i) {
      cout << a[j][i] << " ";
    }
  }
  cout << endl;

  return 0;



}
