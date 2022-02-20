#include<vector>
#include <iostream>
/*You are given a 10x10 matrix representing a metal square, which has begun to rust. There are 3 types of symbols in the matrix – a . (dot) means a healthy part of the metal, a # indicates a rust-resistant part, and a ! indicates a part that has begun to rust.
There may be 0, 1 or more parts that has begun to rust.
The rust spreads from a rusty cell to healthy cells by "infecting" adjacent cells directly above, to the right, below and to the left of itself (no diagonals), at the same time. The rust cannot infect cells that are indicated as rust-resistant. Let’s define the time it takes for all cells adjacent to a rusty cell to get infected as 1 unit.
After reading the matrix, read a single integer – the elapsed time in units (as defined above) – and print a matrix representing how the metal square will look after the rust has been acting on it for that amount of time
*/

using namespace std;

void creatMatrix(vector<vector<char>>& mineField,int& row,int& col) {
    
    char sign;
    for (size_t i = 0; i < row; i++)
    {
        vector<char> input;
        for (size_t j = 0; j < col; j++)
        {
            cin >> sign;
            input.push_back(sign);
        }
        mineField.push_back(input);
    }
}

void expandMine(vector<vector<char>>& mineField,int& row, int& col) {
    if (row < 0 and row >= mineField.size() and col < 0 and col > mineField[0].size()) {
        return;
    }
    mineField[row][col] += 1;
}

void findRust(vector<vector<char>>& mineField) {
    for (size_t i = 0; i < mineField.size(); i++)
    {
        for (size_t j = 0; j < mineField[i].size(); j++)
        {
            if (mineField[i][j] == '!') {

            }
        }
    }
}


int main()
{
    const int row = 10;
    const int col = 10;
}
