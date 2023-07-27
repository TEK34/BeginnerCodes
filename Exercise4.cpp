#include <cmath>
#include <iostream>
using namespace std;
//Calculate the area of a circle using a radius written by the user.
int main()
{
cout << "Please write the radius of your circle: ";
int Radius;
cin >> Radius;
double Area = pow(Radius,2)*M_PI;
cout<<"The area of your circle is" << Area;
}
