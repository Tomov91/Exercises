#include<algorithm>
#include<vector>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
	std::vector<int> nums;
	while (n--)
	{
		int a;
		std::cin >> a;
		nums.push_back(a);
	}
		std::cout << *min_element(nums.begin(), nums.end()) << " "<< *max_element(nums.begin(), nums.end());
		
	
}

