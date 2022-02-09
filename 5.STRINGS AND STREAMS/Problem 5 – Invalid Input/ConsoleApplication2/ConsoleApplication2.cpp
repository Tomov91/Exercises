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

int main()
{
    string line = "0 HELLO 13 -5 ten 10 14 Noise";
    string tempStr;
    int num;
    int sum = 0;
    vector<int> numbers;
    stringstream str;
    str << line;
    while (!str.eof())
    {
        str >> tempStr;
        if (stringstream(tempStr) >> num) {
            numbers.push_back(num);
        }
    }
    for (const int n : numbers) {
        sum += n;
    }
    cout << sum << " ";
}
    

