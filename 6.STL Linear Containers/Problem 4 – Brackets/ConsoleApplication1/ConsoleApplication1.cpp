
#include <iostream>
#include<string>

/*Write a program which reads a single line from the console, containing brackets for a mathematical expression (only the brackets will appear in the input), and determines whether the brackets in the expression are correct. There are 3 types of brackets – {}, [] and (). {} can contain {}, [] and () brackets. Square brackets [] can contain [] and () brackets. Curved () brackets can contain only () brackets. Said simply, each type of brackets can contain the same type of brackets inside, or a “lower” type of brackets (() is lower than [] which is lower than {}). If a bracket of one type is opened, it needs to be closed before a bracket of another type is closed.
Print valid if the brackets in the expression are valid and invalid if they are not.
*/
//NOTE: The logic is created according to examples.

using namespace std;
int main()
{
    string line;
    getline(cin, line);

	for (size_t i = 0; i < line.size(); i++)
	{
		if (line[i] == '(')
			if (line[i + 1] == '[' or line[i + 1] == ']' or line[i + 1] == '{' or line[i + 1] == '}')
				cout << "invalid";
		if(line[i] == '[')
			if (line[i + 1] == '{' or line[i + 1] == '}') {
				cout << "invalid";
			}
	}
	for (size_t i = 0; i < line.size(); i++)
	{
		if(line[i] == ')')
			if (line[i + 1] == '[' or line[i + 1] == ']' or line[i + 1] == '(' or line[i + 1] == '{' or line[i + 1] == '}') {}
	
		if (i + 1 == line.size())
			cout << "valid";
	}
	 
}

