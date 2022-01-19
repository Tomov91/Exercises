#include<iostream>
using namespace std;

int main() {
	double left, right;
	char sign= 0;
	int sum;
	cin >> left >> right;
	while (!sign)
	{
		cin >> sign;
		switch (sign)
		{
		case '+': sum = left + right; break;
		case '-': sum = left - right; break;
		case '*': sum = left * right; break;
		case '/': sum = left / right; break;

		default:
			sign = 0;
			cout << "try again";
		}
	}
	cout << sum;
}