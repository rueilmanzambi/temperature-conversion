/*
Programmer: Rueil Manzambi
MST username: rnm8cm
Instructor: Johnathan Dunker
Section: 301
Date: 02/16/2021
File: lab5.cpp
Description: This program gets the temperature in celsius from the user, converts it in fahrenheit and outputs the result
*/

#include <iostream>
using namespace std;

/*Constant declarations and initializations*/
const float CELSIUS_MULTIPLIER = 1.8; // used in the formula Fahrenheit = (Celsius * 1.8) + 32
const int FAHR_FREEZING_DEGREE = 32;

/*Function prototypes*/
void greetings();
void get_temp_celsius(float & temp_celsius);
float celsius_to_fahr(float temp_celsius);
void show_temp_fahr(float temp_fahr);

/*Start of main function*/
int main()
{
  /*variable declarations*/
  float temp_celsius;
  float temp_fahr;

  /*Function calls*/
  greetings();
  get_temp_celsius(temp_celsius);
  temp_fahr = celsius_to_fahr(temp_celsius);
  show_temp_fahr(temp_fahr);

  cout << "Thank You for using the converter. Have a nice day!" << endl;
  return 0;
}

/*Function definitions*/

// Description: Greets the user
// Pre: None
// Post: Outputs a greeting message 
void greetings()
{
  cout << "Welcome to the celsius to fahrenheit converter." << endl;
  return;
}

// Description: gets valid temperature in celsius from user
// Pre: None
// Post: Assigns user's valid temperature to the argument which is modified by reference in main()
void get_temp_celsius(float & temp_celsius)
{
  do // executes until value entered is >= -273.15
  {
    cout << "Enter the temperature in celsius to convert it into Fahrenheit" << endl;
    cin >> temp_celsius;
    if (temp_celsius < -273.15)
      cout << "The temperature you entered is invalid. Please enter a number that's greater than or equal to -273.15" << endl;
  } while (temp_celsius < -273.15);
  return;
}

// Description: Converts fahrenheit to celcius
// Pre: argument has to exist in main
// Post: returns temperature in fahrenheit
float celsius_to_fahr(float temp_celsius)
{
  float temp_fahr = (temp_celsius * CELSIUS_MULTIPLIER) + FAHR_FREEZING_DEGREE;
  return temp_fahr;
}

// Description: Outputs the result
// Pre: argument has to exist in main
// Post: outputs the result, returns nothing
void show_temp_fahr(float temp_fahr)
{
  cout << "For the inputted temperature in celsius, The temperature in fahrenheit is "<< temp_fahr << endl;
  return;
}

  

