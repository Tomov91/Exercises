#include<string>
#include <iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	int n;
	cin >> n;
	stringstream str(line);
	vector<string> myVec;
	vector<string> newVec;
	string newLine;
	int count = 0;
	while (str>>newLine)
	{
		myVec.push_back(newLine);
	}
	
	for (size_t i=myVec.size()-n; i < myVec.size(); i++)
	{
		newVec.push_back(myVec[i]);
	}
	for (size_t i = 0; i < myVec.size()-n; i++)
	{
		newVec.push_back(myVec[i]);
	}
	for (auto n : newVec) {
		cout << n << " ";
	}
	

}
