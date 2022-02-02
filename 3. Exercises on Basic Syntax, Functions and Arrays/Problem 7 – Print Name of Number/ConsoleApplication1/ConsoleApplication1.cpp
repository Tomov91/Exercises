/*Write a program that, given an integer number in the range [0, 9999], prints the name of that number in English.
Simplifications:
 Use lowercase English letters only
 Don’t place “and” (e.g. 957 is nine hundred fifty seven, NOT nine hundred and fifty seven)
 Skip 0 digits, except for the number 0 (e.g. 0 -&gt; zero; 101 -&gt; one hundred one; 1001 -&gt; one thousand
one)
 Don’t print dashes (e.g. print 75 as seventy five, NOT seventy-five)*/
#include <iostream>

using namespace std;

string DigitToWord(int digit) {

	switch (digit)
	{

	case 2: return "two"; break;
	case 3: return "three"; break;
	case 4: return "four"; break;
	case 5: return "five"; break;
	case 6: return "six"; break;
	case 7: return "seven"; break;
	case 8: return "eight"; break;
	case 9: return "nine"; break;
	default:
		return ""; break;
	}

}


int main()
{
    int number;
    cin >> number;
	if (number == 0) {
		cout << "zero" << endl;
	}
	if (number > 999) {
		cout << "Number should be less than 1000" << endl;
	}

	int d1, d2, d3, d4; // d1 d2 d3 d4
						//  1  2  4  5 ==> 1245

	d1 = number / 1000;		// => d1
	d2 = (number % 1000) / 100; // => d2
	d3 = (number % 100) / 10;	// => d3
	d4 = number % 10;			// => d4
	if (d1)
		cout << DigitToWord(d1) << " thousand ";
	if (d2)
		cout << DigitToWord(d2) << " hundred ";
	if (d3)
		switch (d3) {
		case 1: cout << "ten "; break;
		case 2: cout << "twenty "; break;
		case 3: cout << "thirty "; break;
		case 4: cout << "fourty "; break;
		case 5: cout << "fifty "; break;
		case 6: cout << "sixty "; break;
		case 7: cout << "seventy "; break;
		case 8: cout << "eighty "; break;
		case 9: cout << "ninety "; break;
		}
	if (d4)
		cout << DigitToWord(d4);
}