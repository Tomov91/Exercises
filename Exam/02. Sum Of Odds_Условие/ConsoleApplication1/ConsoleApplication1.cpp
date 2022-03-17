#include<vector>
#include<set>
#include <iostream>
using namespace std;

vector<int> result;

void input(vector<vector<int>>& matrix, int dimOfMtrx) {
    matrix.resize(dimOfMtrx, vector<int> (dimOfMtrx));
    for (size_t row = 0; row < dimOfMtrx; row++)
    {
        for (size_t col = 0; col < dimOfMtrx; col++)
        {
            cin >> matrix[row][col];
        }
    }
}

void remove(vector<vector<int>>& matrix) {
    int reverse = matrix.size()-1;
    for (size_t row = 0; row < matrix.size(); row++)
    {
        for (size_t col = 0; col < matrix[row].size(); col++)
        {
            if (matrix[row][row] != matrix[row][col] and
                matrix[row][reverse] != matrix[row][col]) 
            {
                result.push_back(matrix[row][col]);
            }
        }
        reverse--;
    }
}

void findOddSum(vector<int>& result) {
    int sum = 0;
    for (auto &n : result) {
        if (n % 2 == 0) {

        }
        else
        {
            sum += n;
        }
    }
    cout << sum;
}

int main()
{
    int dimensionsOfMatrix = 0;
    cin >> dimensionsOfMatrix;
    vector<vector<int>> matrix;
    input(matrix, dimensionsOfMatrix);
    remove(matrix);
    findOddSum(result);

}
