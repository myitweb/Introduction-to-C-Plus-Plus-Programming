/* Write a program for sorting the number in ascending and descending order */

// Author : http://cppprogramskills.blogspot.in
// Source : http://cppprogramskills.blogspot.in/2009/02/write-c-program-to-sort-list-of-numbers.html


#include<iostream.h>
#include<conio.h>
void main( )
{
int a[10], n, i, j, temp;
clrscr( );
cout<<"Enter the no. of elements:";
cin>> n;
cout<<"Enter the array elements:";
for(i=0; i< n; i++)
cin>>a[i];
//------Operation part-------
for( i=0; i< n; i++)
{
for(j=i; j< n-1; j++)
{
if(a[i]> a[j+1] )
{
temp= a[i];
a[i]= a[j+1];
a[j+1]= temp;
}
}
}

cout<<"Elements after sorting:";
for( i=0; i< n; i++)
cin>> a[i];
getch ( );
}


