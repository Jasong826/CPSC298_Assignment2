/*
Jason Song
CPSC 298 interterm
Assignment 2
Problem 5
*/

#include <iostream>

using namespace std;

//this program will convert from feet and inches to meter and centimeters


//this function prompts for user input
int userInput(int &feet, int &inches) {
  cout << "Please input feet: " << endl;
  cin >> feet;
  cout << "Please input inches: " << endl;
  cin >> inches;
  return feet, inches;
}

//this function converts from feets and inches to meters and centimeters
int calc (int feet, int &inches, int meters, int &centi) {
  cout << "Converting..." << endl;
  inches = (feet * 12) + inches;
  centi = inches * 2.54;

  return centi;
}


//prints out the meters and centimeters
void output (int &meters, int &centi) {
  while (centi > 100) {
    centi = centi -100;
    meters = meters + 1;
  }
  cout << "Meters: " << meters << " Centimeters: " << centi << endl;
}

//the main function calls the functions and intializes the variables
int main()  {
  //intialize variables
  int feet = 0;
  int inches = 0;
  int meters = 0;
  int centi = 0;

  userInput(feet, inches);
  calc(feet, inches, meters, centi);

  output(meters, centi);



}
