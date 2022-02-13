#include<string>
#include<sstream>
#include <iostream>
#include<vector>
#include<fstream>


/*Write a program that reads two integer matrices (2D arrays) from the console and compares them element by element. For better code reusability, you could do the comparison in a function, which returns true if they are equal and false if not.
Each matrix definition on the console will contain a line with a positive integer number R – the number of rows in the matrix – followed by R lines containing the numbers in the matrix, separated by spaces (each line will have an equal amount of numbers.
The matrices will have at most 10 rows and at most 10 columns.
Print equal if the matrices match, and not equal if they don’t match.
*/

using namespace std;

void readvec(vector<vector<int>>& matrix) {
    int rows;
    cin >> rows;
    cin.ignore();

    while (rows--)
    {
        vector<int> currentrow;
        string cols;
        getline(cin, cols);
        istringstream stream(cols);
        int number;
        while (stream >> number)
        {
            currentrow.push_back(number);
        }
        matrix.push_back(currentrow);
    }
}


int main()
{
    vector<vector<int>> matrix1;
    vector<vector<int>> matrix2;
    readvec(matrix1);
    readvec(matrix2);
    cout << (matrix1 == matrix2 ? "equal" : "not equal");
}

