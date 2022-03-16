#include<string>
#include<vector>
#include<algorithm>
#include <iostream>
#include<string>

using namespace std;
int main()
{
    string line;
    getline(cin, line);
	vector<string> myVec;
	string temp;
	for (size_t i = 0; i < line.size(); i++)
	{
		if (line[i] == '-' or isalpha(line[i])) {
			temp.push_back(line[i]);	
		}
		if (isspace(line[i])) {
			if(!temp.empty())
			myVec.push_back(temp);
			temp = "";
		}
		
	}
	sort(myVec.begin(), myVec.end());
		if (!myVec.empty()) {
			cout << myVec[0];
		}
		else
		{
			cout << "no noise";
		}
}
