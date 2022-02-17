#include <iostream>
#include <string>
#include <stack>
#include<map>
#include <sstream>
#include <vector>

using namespace std;

/*
Write a program that reads the digits of a base-10 numeral system – exactly 10 unique non-space
characters on a single line, representing the symbols used for the digits 0-9 (inclusively) – then
reads two numbers represented in that numeral system, then prints their sum in that numeral system.
*/

string toInt(map<char,int>& myMap,string& searched) {
    string store;
    for (size_t i = 0; i < searched.size(); i++)
    {
        for (map<char, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
            if (it->first == searched[i])
            {
                store += to_string(it->second);
                break;
            }
        }
    }
    return store;
}
void backToString(int n, map<char, int>& myMap) {
    string num;
    num = to_string(n);
    int temp;
    for (char i = 0; i < num.size(); i++)
        for (map<char, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
            {
                temp = num[i] - 48;
                if (temp == it->second) {
                    cout << it->first;
                }
            }
        }
}


int main()
{
    string baseInput;
    getline(cin, baseInput);
    string collectible;
    getline(cin, collectible);
    string secondCollectible;
    getline(cin, secondCollectible);

    int numberOne, numberTwo, sum;

    map<char, int> myMap;
    for (size_t i = 0; i < baseInput.size(); i++)
    {
        myMap[baseInput[i]]=i;
    }
    
    numberOne = stoi(toInt(myMap,collectible));
    numberTwo = stoi(toInt(myMap, secondCollectible));
    sum = numberOne + numberTwo;
    backToString(sum,myMap);

    return 0;
}