#include<vector>
#include <iostream>
#include<string>
using namespace std;

/*Problem 6 - Triples of Latin Letters
Write a program to read an integer n and print all triples of the first n small Latin letters, ordered
alphabetically:*/

int main()
{
	int n;
	cin >> n;
	char letter = 'a';
	int b = letter;
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
			for (size_t k = 0; k < n; k++)
				cout << (char)(i + 'a') << (char)(j + 'a') << (char)(k + 'a') << endl;

	/*int d = 1;
	cout << (char)(d + 'a');*/
}
