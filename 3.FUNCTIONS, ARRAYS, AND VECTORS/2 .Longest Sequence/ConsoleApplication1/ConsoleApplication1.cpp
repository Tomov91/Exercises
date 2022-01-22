#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{

	int n;
	int currentMatch = 1;
	int maxMatch = 1;
	int store = 0;
	int counter = 0;
	cin >> n;
	vector<int> sequence;

	while (n--)
	{
		int m;
		cin >> m;
		sequence.push_back(m);
	}
	for (size_t i = 1; i < sequence.size(); i++)
	{
		if (sequence[i] == sequence[i - 1]) {
			currentMatch++;
			if (currentMatch > maxMatch) {
				store = sequence[i];
				maxMatch = currentMatch;
			}
		}
		else
		{
			currentMatch = 1;
		}

	}
	if (maxMatch == 1) {
		int s = sequence.size();
		cout << sequence[s - 1];
	}
	else {
		for (size_t i = 0; i < maxMatch; i++)
		{
			cout << store << " ";
		}
	}
}
