/* Write a C++ function for swapping two numbers without using third variable. */
/* Logic is implemented in main function */

// Author : http://fahad-cprogramming.blogspot.in
// Source : http://fahad-cprogramming.blogspot.in/2013/02/cplusplus-program-to-swap-two-variables-without-using-temp-or-third-variable.html

#include<iostream>

using namespace std;

int main()

{

int var1, var2;

 cout<<"Enter value for first integer:  ";

 cin>>var1;

 cout<<"Enter value for second integer:  ";

 cin>>var2;

 cout<<" Values Before swapping:  "<<endl;

 cout<<"First Integer ="<<var1<<endl;

 cout<<"Second Interger ="<<var2<<endl;

var1=var1+var2;

var2=var1-var2;

var1=var1-var2;

cout<<" Values After swapping:  "<<endl;

cout<<"First Integer ="<<var1<<endl;

cout<<"Second Interger ="<<var2<<endl;

 return 0;

}



