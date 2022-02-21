
#include<iostream>
#include<string>
#include<sstream>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*You are given a 10x10 matrix representing a metal square, which has begun to rust. There are 3 types of symbols in the matrix – a . (dot) means a healthy part of the metal, a # indicates a rust-resistant part, and a ! indicates a part that has begun to rust.
There may be 0, 1 or more parts that has begun to rust.
The rust spreads from a rusty cell to healthy cells by "infecting" adjacent cells directly above, to the right, below and to the left of itself (no diagonals), at the same time. The rust cannot infect cells that are indicated as rust-resistant. Let’s define the time it takes for all cells adjacent to a rusty cell to get infected as 1 unit.
After reading the matrix, read a single integer – the elapsed time in units (as defined above) – and print a matrix representing how the metal square will look after the rust has been acting on it for that amount of time
*/

typedef vector<vector<char>> vvc;
void Readmatrix(vector<vector<char>>& PulniMatricata)
{
	int rows = 10;
	int cols = 10;
	for (size_t row = 0; row < rows; row++)
	{
		vector<char> currentRow;
		for (size_t col = 0; col < cols ; col++)
		{
			char value;
			cin >> value;
			currentRow.push_back(value);
		}
		PulniMatricata.push_back(currentRow);
	}
}
void findObstecals(vector<unsigned>& findX, vector<unsigned>& findY,vvc& matrix) 
{
	for (size_t row = 0; row < matrix.size(); row++)
	{
		for (size_t col = 0; col < matrix[0].size(); col++)
		{
			if (matrix[row][col] == '!') {
				
				findX.push_back(row);
				findY.push_back(col);
			}
		}
	}
}


void extendSingel(vvc& matrix, int row, int col) {
	if (row >= matrix.size() or row < 0 or col >= matrix[0].size() or col < 0) {
		return;
	}
	if (matrix[row][col] != '#') {
		matrix[row][col] = '!';
	}
}

void extend(vector<unsigned>& findX, vector<unsigned>& findY, vvc& matrix) {
	for (size_t i = 0; i < findX.size(); i++)
	{
		int row = findX[i];
		int col = findY[i];
		extendSingel(matrix, row, col+1);
		extendSingel(matrix, row, col-1);
		extendSingel(matrix, row-1, col);
		extendSingel(matrix, row+1, col);
	}
}
void printMatrix(vvc matrix) {
	for (size_t row = 0; row < matrix.size(); row++)
	{
		for (size_t col = 0; col < matrix[0].size(); col++)
		{
			cout << matrix[row][col];
			
		}
		cout << endl;
	}
}
int main()
{
	
	vector<vector<char>> matrix;
	Readmatrix(matrix);
	int number;
	cin >> number;
	while (number--)
	{
		vector<unsigned> findX;
		vector<unsigned> findY;
		findObstecals(findX,findY,matrix);
		extend(findX, findY, matrix);
	}
	printMatrix(matrix);
}


