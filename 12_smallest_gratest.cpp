/* Write a program for finding the greatest and smallest number using vector. */

// Source : http://cppquicklearn.blogspot.in/2012/10/c-program-to-find-largest-and-smallest.html 


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int v[50],large,small;
int i,n;
cout<<"enter how many elements (max 50) ?";
cout<<endl;
cin>>n;
cout<<"enter values in the vector";
cout<<endl;
for(i=0;i<n;i++)
cin>>v[i];
large=v[1];
small=v[1];
for(i=0;i<n;i++)
{
if(v[i]>large)
large=v[i];
else
if(v[i]<small)
small=v[i];
}
cout<<endl<<"largest element ="<<large;
cout<<endl<<"smallest element="<<small;
getch();
}

