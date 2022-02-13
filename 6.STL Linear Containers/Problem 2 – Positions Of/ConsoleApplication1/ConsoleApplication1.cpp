#include<vector>
#include <iostream>
#include<string>
#include<sstream>

/*Write a program that reads a matrix of integers from the console, then a number, and prints all the positions at which that number appears in the matrix.
The matrix definition on the console will contain a line with two positive integer numbers R and C – the number of rows and columns in the matrix – followed by R lines, each containing C numbers (separated by spaces), representing each row of the matrix.
The number you will need to find the positions of will be entered on a single line, after the matrix.
You should print each position on a single line – first print the row, then the column at which the number appears.
If the number does not appear in the matrix, print not found
*/

using namespace std;

void readvec(vector<vector<int>>& matrix) {
    int row, cols, numbers;
    vector<int> arr;
    cin >> row;
    cin >> cols;
    while (row--)
    {
        while (cols--)
        {
            cin >> numbers;
            arr.push_back(numbers);
        }
        matrix.push_back(arr);
    }
}

void searching(const vector<vector<int>>& matrix, vector<pair<int, int>>& position) {
    int searching;
    cin >> searching;
    for (size_t row = 0; row < matrix.size(); row++)
    {
        for (size_t col = 0; col < matrix[0].size(); col++)
        {
            if (matrix[row][col] == searching) {
                position.emplace_back(matrix[row][col]);
            }
        }
    }
}

void print(const vector < pair<int, int>>& result) {
    for (pair<int,int> mypair : result) {
        cout << mypair.first << " " << mypair.second << endl;
    }
}

int main()
{
    vector<vector<int>> matrix;
    vector<pair<int, int>> position;
    readvec(matrix);
    searching(matrix, position);
    if (!position.empty()) {
        print(position);
    }
    else
    {
        cout << "not found" << endl;
    }
}

