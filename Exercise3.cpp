#include <iostream>
//Exercise 3 : write a program that converts Fahrenheit degrees into Celsius degrees
using namespace std;
int main()
{
cout<< "Fahrenheit  temperature = ";
double Fahrenheit;
cin >> Fahrenheit;
double Celsius= (5*(Fahrenheit-32))/9;
cout<< "Celsius temperature=" << Celsius;
}
