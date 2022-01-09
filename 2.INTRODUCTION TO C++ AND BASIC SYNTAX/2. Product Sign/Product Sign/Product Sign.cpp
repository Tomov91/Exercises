
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int product = a * b * c;
	if (product >= 0) {
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}
}

