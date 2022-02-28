#include<vector>
#include <iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

/*Read a list of integers and extract all square numbers from it and print them in descending order. 
A square number is an integer which is the square of any integer. For example, 1, 4, 9, 16 are square numbers.*/

int main()
{
    string line;
    getline(cin, line);
    stringstream str(line);
    int temp;
    vector<int> arr;
    int var = 4;
    while (str>>temp)
    {
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for (size_t i = 0; i < arr.size(); i++)
    {
        int sqr = sqrt(arr[i]);
        if ((sqr * sqr) == arr[i]) {
            cout << arr[i] << " ";
        }
    }
   
}

