#include<vector>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int theChosenOne;
	vector<int> nums;
	while (n--)
	{
		int m;
		cin >> m;
		nums.push_back(m);
	}
	cin >> theChosenOne;
	cout << nums[theChosenOne];
}

