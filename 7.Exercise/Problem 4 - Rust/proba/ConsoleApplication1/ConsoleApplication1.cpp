#include<vector>
#include <iostream>

using namespace std;

void expandSingleMine(vector<vector<char>>& mineField,int ROW, int COL ){
	if (ROW<0 and COL < 0 and ROW > mineField[0].size() and COL > mineField.size()) {
		return;
	}
	mineField[ROW][COL] = '!';
}

void findRust(vector<vector<char>>& mineField,int& ROW,int& COL) {
	vector<int> minesX;
	for (size_t i = 0; i < mineField.size(); i++)
	{
		for (size_t j = 0; j < mineField[i].size(); j++)
		{
			if (mineField[i][j] == '!') {
				const int ROW = i;
				const int COL = j;
				
				
				//expandSingleMine(mineField, ROW - 1, COL - 1);
				expandSingleMine(mineField, ROW - 1, COL);
				//expandSingleMine(mineField, ROW - 1, COL + 1);

				expandSingleMine(mineField, ROW, COL - 1);
				//expandSingleMine(mineField, ROW, COL);
				expandSingleMine(mineField, ROW, COL + 1);

				//expandSingleMine(mineField, ROW + 1, COL - 1);
				expandSingleMine(mineField, ROW + 1, COL);
				//expandSingleMine(mineField, ROW + 1, COL + 1);
			}
		}
	}
}



int main()
{
	int n, m;
	vector<vector<char>> proba{
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','!','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},
		{ '.','.','.','.','.','.','.','.','.','.'},

	};
	findRust(proba, n, m);
	for (size_t i = 0; i < proba.size(); i++)
	{
		for (size_t j = 0; j < proba[i].size(); j++)
		{
			cout << proba[i][j];
		}
		cout << endl;
	}
	
}

