#include<string>
#include <iostream>
#include<algorithm>
#include<vector>

/*Write a program that reads lines of space separated words from the standard input (until “end” word is met),
reverse the order of all given words and outputs the result to the standard output (words should be space-
delimited).*/

using namespace std;

int main()
{
	string word;
	string line;
	vector<string> sentence;
	while (true)
	{
		
			cin >> word;
			if (word == "end")
				cout << "(empty)";
				break;
			sentence.push_back(word);
		
	}
		
	
	for (vector<string>::reverse_iterator it = sentence.rbegin(); it != sentence.rend(); it++)
		cout << *it << " ";

}

