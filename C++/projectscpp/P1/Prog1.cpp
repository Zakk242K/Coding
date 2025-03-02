/*This program is going to be a basic function program. 
  which will be my lecture 1 program.*/

//This is a preprocessor directive. It includes the contents of the iostream file in the program.
//iostream is a standard C++ library that provides input and output services.


using namespace std;
#include <iostream>

int main()
{

    int noone, notwo;


    cout << "Assignment 1" << endl;
    //Sum of two number with help of variables given by user
    
    cout << "Enter the first number: ";
    cin >> noone;
    cout << "Enter the second number: ";
    cin >> notwo;

    cout << "The sum of the two numbers is: " << noone + notwo << endl;


    return 0;
}