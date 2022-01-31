
#include <iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

int ReadIntWithNoise(string str) {
	unsigned index = 0;
	int number = 0;

	for (index = 0; index < str.length(); index++) {
		char symbol = str[index];
		if (symbol >= '0' && symbol <= '9') {
			number = number * 10;  // up number with ^10
			number = number + (symbol - '0');  // add the new number 
		}
		else
			if (symbol == '.')
				break;
	}

	return number;
}

int main()
{
	// initialize pseudorandom generator
	srand((unsigned)time(NULL));

	// get the size of the random sequence
	int count = 100; // ((unsigned)rand()) % 100 + 1; // count ==> 1 .. 65

	string str;
	for (; count; count--)
		str.push_back((char)(rand()));

	cout << "Generated sequence: " << endl;
	cout << str << endl;
	cout << "=============" << endl;

	int result = ReadIntWithNoise(str);
	cout << "Our number is: " << result << endl;
	cout << "sqrt(result) = " << sqrt(result) << endl;
}
