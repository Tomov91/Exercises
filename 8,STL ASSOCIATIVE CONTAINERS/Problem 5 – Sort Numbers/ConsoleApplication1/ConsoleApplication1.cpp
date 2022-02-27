#include<string>
#include<vector>
#include<algorithm>
#include <iostream>
#include<sstream>
using namespace std;
/*Read a list of decimal numbers and sort them in increasing order. Print the output as shown in the examples below*/
int main()
{
    int temp;
    string line;
    getline(cin, line);
    stringstream str(line);
    vector<int> arr;
    while (str >> temp)
    {
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for (int n : arr) {
        cout << n << " ";
    }
}

