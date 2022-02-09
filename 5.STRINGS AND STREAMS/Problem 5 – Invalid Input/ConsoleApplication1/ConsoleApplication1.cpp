#include <iostream>
#include <string>
#include<sstream>
#include<istream>
#include<vector>
#include <charconv> // std::from_chars
#include <optional>
#include <string>
#include <string_view>

using namespace std;

/*
Write a program which reads a line containing integer numbers, separated by spaces,
and prints their sum. In addition to the numbers, each line will contain one
or more words (sequences of English letters) – print those words on a separate line,
separated by spaces, after the sum, in the order they were in the input.
*/




using namespace std;

void getNumberFromString(string& s) {
    stringstream str_strm;
    str_strm << s; //convert the string s into stringstream
    string temp_str;
    int temp_int;
    vector<int> myVec;
    while (!str_strm.eof()) {
        str_strm >> temp_str; //take words into temp_str one by one
        if (stringstream(temp_str) >> temp_int) { //try to convert string to int
            myVec.push_back(temp_int);
        }
        //temp_str = ""; //clear temp string
    }
    int sum = 0;
    for (int n : myVec) {
        sum += n;
    }
    cout << sum << endl;
    
}

int findWords(string& str)
{
    string newString;

    for (unsigned int i = 0; i < str.size(); i++)
    {
        if (str[i] < 45 || str[i]>57)
        {
            newString += str[i];
        }
    }
    cout << newString << '\n';
    return 0;
}


int main()
{
    string line = "0 HELLO 13 -5 ten 10 14 Noise";
    findWords(line);
    getNumberFromString(line);
    
    
}


/*#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
vector<string> split(const string& s, char delim) {
    vector<string> result;
    stringstream ss(s);
    string item;

    while (getline(ss, item, delim)) {
        result.push_back(item);
    }

    return result;
}
int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<string>stringsSplitted = split(input, ' ');
    std::vector<string>output;

    for (const string& str : stringsSplitted) {
        if (isdigit(str[0]) || str[0] == '-') {
            output.push_back(str);
        }
    }

    for (const std::string& str : output) {
        std::cout << str << " ";
    }

    return 0;
}*/

//Solution 2
/*int findSum(string str)
{

    string temp = "";
    int sum = 0;

    for (char ch : str)
    {
        if (ch == '-')
        {
            temp += ch;
        }

        else if (isdigit(ch))
        {
            temp += ch;
        }

        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }

    }
    return sum + atoi(temp.c_str());
}

int findWords(string str)
{
    string newString;

    for (unsigned int i = 0; i < str.size(); i++)
    {
        if (str[i] < 47 || str[i]>57)
        {
            newString += str[i];
        }
    }
    cout << newString << '\n';
    return 0;
}


int main()
{

    string str;
    getline(cin, str);

    cout << findSum(str) << '\n';
    findWords(str);

    return 0;
}*/