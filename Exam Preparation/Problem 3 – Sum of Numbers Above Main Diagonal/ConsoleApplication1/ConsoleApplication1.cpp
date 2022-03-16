#include<vector>
#include <iostream>

using namespace std;

vector<int> vec;

void input(vector<vector<int>>& arr,int n) {
    for (size_t i = 0; i < n; i++)
    {
        arr[i].resize(n);
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void diagonal(vector<vector<int>>& arr) {
    
    for (size_t row = 0; row < arr.size(); row++)
    {
        for (size_t col = row+1; col < arr[row].size(); col++)
        {
            if (row < 0 and col < 0 and row >= arr.size() and col >= arr[row].size()) {
                break;
            }
            else
            {
                vec.push_back(arr[row][col]);
            }
        }
    }
}

int sum(vector<int>& vec) {
    int sum = 0;
    for (auto n : vec) {
        sum += n;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    //arr.resize(n);

    cout << "Enter size of matrix: " << n << endl;
    cout << "The MATRIX is : " << endl;
    input(arr, n);
    diagonal(arr);
    int answer = sum(vec);
    cout << "Sum of numbers above diagonal is: " << answer;
}

