#include<vector>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    int sum;
    vector<int> nums;
    cin >> n;
    while (n--)
    {
        cin >> m;
        nums.push_back(m);
    }
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = 0; j < nums.size(); j++)
        {
            sum = nums[i] * nums[j];
            cout << sum << " ";
        }
    }
}

