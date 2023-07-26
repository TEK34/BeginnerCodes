#include <iostream>
//Swapping values of numbers using the bucket method:
using namespace std;
int main()
{
//Declaring Variables;
    int file_size=100;
    int counter=50;
    double sales=9.99;
//Declaring the empty bucket with the value of file_size;
    int bucket=file_size;
//Now that file_size is empty we can assign counter value to it;
    file_size=counter;
//And lastly since  counter value is emty we will assign it s value  to the bucket we initially
//assigned the value of file_size (100);
    counter=bucket;
    cout << bucket;
    return 0;
}
