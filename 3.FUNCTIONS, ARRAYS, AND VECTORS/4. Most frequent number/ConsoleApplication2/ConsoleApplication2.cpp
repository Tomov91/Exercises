#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int maxCount = 0;
	int count = 1;
	vector<int> numbers;
	cin >> n;
	while (n--)
	{
		cin >> m;
		numbers.push_back(m);
	}
	//sort(numbers.begin(), numbers.end());
	for (size_t i = 0; i < numbers.size(); i++)
	{
			int count = 1;
		for (size_t j = i+1; j < numbers.size(); j++)
			if (numbers[i] == numbers[j]) 
				count++;
		if (count > maxCount) 
			maxCount = count;		
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		int count = 1;
		for (int j = i + 1; j < numbers.size(); j++)
			if (numbers[i] == numbers[j])
				count++;
		if (count == maxCount)
			cout << numbers[i] << " ";
	}
	
}
