#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int m;
    int currentMatch = 1;
    int maxMatch = 1;
    int store = 0;
    int moreThanOneSequence = 0;
    vector<int> numbers;
    vector <int> match;
    cin >> n;
    while (n--)
    {
        cin >> m;
        numbers.push_back(m);
    }
    sort(numbers.begin(), numbers.end());
    for (size_t i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] == numbers[i - 1]) {
            currentMatch++;

            if (currentMatch > maxMatch) {

                store = numbers[i];
                maxMatch = currentMatch;
                if (currentMatch == maxMatch ) {
                    match.push_back(store);
                }
            }
        }
        else
           {
               currentMatch = 1;
           }
        
    }

    for (size_t i = 0; i < match.size(); i++)
    {
        cout << match[i];
    }
        
   
}

