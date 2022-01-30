#include<vector>
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string input;
	string number;
	cin >> input;
	for (const char& c : input) {
		if (isdigit(c)) {
			number += c;
		}
	}
	int result = stoi(number);
	cout << sqrt(result);
}
