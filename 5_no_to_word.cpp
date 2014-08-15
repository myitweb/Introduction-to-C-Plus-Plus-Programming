/* C++ program for converting number to words. (switch,break,continue) */
/* Limitation : Takes only two digit No's */

// Author : Unknown
// Source : http://www.daniweb.com/software-development/cpp/threads/348454/converting-numbers-to-words-in-c-using-switch-statements

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a two-digit number:\n";
    cin >> num;
    int ones_digit = num%10;//preform these operations
    int tens_digit = num/10;//after you get the value for num...not before
    if ((num>=20) && (num<100))//if statement was wrong
    {
    switch (tens_digit)
    {
	    case 2:
	    cout << " twenty- ";
	    break;
	    case 3:
	    cout << " thirty- ";
	    break;
	    case 4:
	    cout << " forty- ";
	    break;
	    case 5:
	    cout << " fifty- ";
	    break;
	    case 6:
	    cout << " sixty- ";
	    break;
	    case 7:
	    cout << " seventy- ";
	    break;
	    case 8:
	    cout << " eighty- ";
	    break;
	    case 9:
	    cout << " ninety- ";
	    break;
	    default:
	    cout << " Error ";
	    }
    switch (ones_digit)
	    {
	    case 0:
	    cout << " ";
	    break;
	    case 1:
	    cout << "one";
	    break;
	    case 2:
	    cout << "two";
	    break;
	    case 3:
	    cout << "three";
	    break;
	    case 4:
	    cout << "four";
	    break;
	    case 5:
	    cout << "five";
	    break;
	    case 6:
	    cout << "six";
	    break;
	    case 7:
	    cout << "seven";
	    break;
	    case 8:
	    cout << "eight";
	    break;
	    case 9:
	    cout << "nine";
	    break;
	    default:
	    cout << " Error ";
	    }
    }
    if ((num >= 10) && (num <= 19))//if statement was wrong
    {
	    switch (num)
	    {
	    case 10:
	    cout << "Ten";
	    break;
	    case 11:
	    cout << "Eleven";
	    break;
	    case 12:
	    cout << "Twelve";
	    break;
	    case 13:
	    cout << "Thirteen";
	    break;
	    case 14:
	    cout << "Fourteen";
	    break;
	    case 15:
	    cout << "Fifteen";
	    break;
	    case 16:
	    cout << "Sixteen";
	    break;
	    case 17:
	    cout << "Seventeen";
	    break;
	    case 18:
	    cout << "Eighteen";
	    break;
	    case 19:
	    cout << "Nineteen";
	    break;
	    default:
	    cout << " Error ";
	    }
    }
    return 0;
 }
