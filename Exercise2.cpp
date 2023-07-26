#include <iostream>
using namespace std;
// Exercise 2: Your company made 95000$ in sales, the state tax is 4% and
// the county tax is 2%, calculate the value of each tax , the total taxes
// your company paid and the revenue you are left with after tax
int main()
{
int Sales=95000;
int StateTax=Sales * 4/100;
int CountyTax=Sales* 2/100;
int SalesAfterTax=Sales-StateTax-CountyTax;
cout <<"State  Tax = "<< StateTax <<endl
     <<"County Tax = "<< CountyTax<<endl
     <<"Sales After Tax="<<SalesAfterTax<<endl;
}
