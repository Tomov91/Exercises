#include<vector>
#include <iostream>
using namespace std;

int main()
{
	int n;
	int m;
	vector<int> nums;
	int sum = 0;
	int prevSum = 0;
	int store = 1000;
	cin >> n;
	while (n--)
	{
		cin >> m;
		nums.push_back(m);
	}
	for (size_t i = 0; i < nums.size(); i++)
	{
		
		for (size_t j = i+1; j < nums.size(); j++)
		{
			
			
			sum = abs(nums[i] - nums[j]);
			if (sum < store) {
				store = sum;
			}
				prevSum = sum;
		}
		
	}
	cout << store;
}


