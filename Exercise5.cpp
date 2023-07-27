#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Write a program to roll a dice
int main()
{
    srand(time(0));
    short first=rand()  %6 +1;
    short second=rand() %6 +1;
    cout <<"You roll the dice and the numbers you got are: " << first << ", " << second;
    return 0;
}
