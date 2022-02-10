/* a program which reads a sequence of non - negative integer numbers(in the decimal numeral system),
separated by spaces, and finds the maximum number.The numbers in the input may have “noise” – symbols before,
after, or between the digits of the number, which are not decimal digits(you need to ignore these when reading the
    numbers).All symbols in the input will be either letters, digits, punctuation, or signs from the standard ASCII table
    (no control symbols like newlines or tabs, delete, etc.)*/
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>


using namespace std;
int main()
{
    string line;
    getline(cin, line); // input -   1.][.3 5--aA3:)5 2asd=@14
    stringstream str;
    str << line;
    vector<int> store;
    int temp = 0;
    string tempStr;
    vector<string> sentence;
    string num;
    while (str >> tempStr)
    {
        sentence.push_back(tempStr);
    }
    for (size_t i = 0; i < sentence.size(); i++)
    {
        for (char c : sentence[i]) {
            if (isdigit(c)) {
                num += c;
            }
        }
        temp = stoi(num);
        store.push_back(temp);
        num = "";
    }
    cout << "The numbers are ";
    for (int n : store) {
        cout << n << " ";
    }
    cout << ", of which " << *max_element(store.begin(), store.end()) << " is the max";
}
