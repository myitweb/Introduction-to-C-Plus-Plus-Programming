/* Write your own function for string reverse */

// Author http://programmingworldc.blogspot.in


#include<iostream.h>
#include<conio.h>

int main()
{

    char str[]="Reverseme";

    char reverse[50];

    int i=-1;
    int j=0;

         //Traverse a String Until it not reach at the end of string 

          while(str[++i]!='\0');

                  while(i>=0)
                       reverse[j++]=str[--i];
 
                 reverse[j]='\0';

      cout<<"Reverse of  a string is"<<reverse;

      return 0;
}
