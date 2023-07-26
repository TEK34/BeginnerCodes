#include <iostream>
using namespace std;
//Mathematical Expressions
int main()
{
//Declaring variables
int x=10;
int y=3;
//Sum
int z=x+y;
//Division ( You need to declare one of the variables
//as double so you get the precise division not the round up of it
double c=x/y;
//Modulus ( returns the remainder of division)
int v = x%y ;
//Increment operator pre/post fix
int  b=x++; //x=11 b=10 (postfix)
int  n=++y; //y=4,n=4 (prefix)
cout << "Sum of x and y="       << z << "\n"
     << "Division of x and y="  << c << "\n"
     << "Modulus of  x and y="  << v << "\n"
     << "Postfix="              << b << "\n"
     << "Prefix="               << n;
}
