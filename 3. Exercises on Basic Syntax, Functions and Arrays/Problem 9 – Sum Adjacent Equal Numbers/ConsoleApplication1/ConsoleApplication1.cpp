/*Write a program to sum all adjacent equal numbers in an array of decimal numbers, starting from left to right.
 After two numbers are summed, the obtained result could be equal to some of its neighborsand should be
summed as well(see the examples below).
 Always sum the leftmost two equal neighbors(if several couples of equal neighbors are available).
The array will be defined by two lines – the first line will contain the size of the arrayand the second will contain the
elements of the array.*/

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    vector<int> numbers;
    vector<int> result;
    for (size_t i = 0; i < n; i++)
    {
        cin >> m;
        numbers.push_back(m);
    }
    int add = 0;
    for (size_t i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] == numbers[i - 1]) {
            add = numbers[i] + numbers[i - 1];
            numbers.erase(numbers.begin()+i);
            numbers.erase(numbers.begin() + i-1);
            numbers.emplace(numbers.begin() + i,add);
            for (auto el : numbers)
            cout << el << " ";
            cout << endl;
            i = 1;
        }
    }
    for (auto elements : numbers) {
        cout << elements;
    }
    
}

