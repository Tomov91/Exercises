#include<vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> numbers;
    vector<int>::iterator new_numbers;
    int n;
    cin >> n;
    int theChosenOne;
    int i = 0;
    while (n--)
    {
        int m;
        cin >> m;
        numbers.push_back(m);
    }
    cin >> theChosenOne;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != theChosenOne) {
            cout << numbers[i] << " ";

        }
       // new_numbers = remove(numbers.begin(), numbers.end(), theChosenOne);
        //cout << numbers[i] << " ";
    }
}

