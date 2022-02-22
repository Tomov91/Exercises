#include<vector>
#include<set>
#include<list>
#include <iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string numbers;
    getline(cin, numbers);
    stringstream str(numbers);
    double temp;
    vector<double> nums;
    set<double> mySet;
    while (str>>temp)
    {
        nums.push_back(temp);
        mySet.insert(temp);
    }
    
    for (auto n : mySet) {
        cout << n << " -> " << count(nums.begin(), nums.end(), n) << endl;
    }
    
    
}

