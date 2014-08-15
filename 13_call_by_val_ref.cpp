/* Write a program for implementing the concept of call by value and call by reference */

// Source : http://www.tutorialspoint.com/cplusplus/cpp_function_call_by_reference.html


#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main ()
{
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   /* calling a function to swap the values using variable reference.*/
   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}

void swap(int &x, int &y)
{
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}
