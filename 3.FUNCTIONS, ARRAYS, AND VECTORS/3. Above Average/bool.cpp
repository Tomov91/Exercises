
#include <iostream>
#include<vector>
using namespace std;

void aboveAverage() {
	int n;
	int m;
	int average=0;
	int aboveAverage;
	vector<int> nums;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> m;
		nums.push_back(m);
	}
	for (size_t i = 0; i < nums.size(); i++)
	{
		average += nums[i];
	}
	aboveAverage = average / n;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (aboveAverage <= nums[i]) {
			cout << nums[i] << " ";
		}
	}
}


int main()
{
	aboveAverage();
}

