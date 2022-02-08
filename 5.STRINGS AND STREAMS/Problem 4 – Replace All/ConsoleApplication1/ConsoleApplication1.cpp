#include<string>
#include<algorithm>
#include<sstream>
#include<istream>
#include <iostream>
#include<vector>
#include <charconv> // std::from_chars
#include <optional>
#include <string>
#include <string_view>


/*Write a program which is given a line of text, another line with a &quot;find&quot; string and another line with a &quot;replace&quot;
string. Any part of text which matches the &quot;find&quot; string should be replaced with the &quot;replace&quot; string. Print the
resulting text on the console.*/


using namespace std;


void searchAndReplace() {
	string line;
	getline(cin, line);
	stringstream str;
	str << line;
	string searched;
	string replaceWith;
	cin >> searched;
	cin >> replaceWith;
	vector<string> sentence;
	string getWord;
	string word;
	string tempwrd;
	while (str >> tempwrd )
	{
		sentence.push_back(tempwrd);
	}

	for (auto i = 0; i < sentence.size(); i++)
	{
		for (char c : sentence[i]) {
			if (isalpha(c)) {
				word += c;
				if (word == searched) {
					replace(sentence.begin(), sentence.end(), sentence[i], replaceWith);
				}
			}

		}
		word = "";
	}
	for (string a : sentence) {
		cout << a << " ";
	}
	
}

int main()
{
	searchAndReplace();
	/*string tempStr ;
	string input;
	getline(cin,tempStr);
	string searched;
	string replaceWith;
	cin >> searched;
	cin >> replaceWith;


	tempStr.replace(tempStr.find(searched), searched.size(), replaceWith);
	//cout << tempStr;*/

	
	
	


	/*while (stream >> tempStr)
	{
		myVec.push_back(tempStr);
	}
	for (size_t i = 0; i < myVec.size(); i++)
	{
		if (myVec[i] == searched) {
			myVec[i] = replaceWith;
		}
		cout << myVec[i] << " ";
	}*/
}

