#include<string>
#include<sstream>
#include<map>
#include<algorithm>
#include <iostream>
#include<unordered_map>
using namespace std;
/*You are given a sequence of strings, each on a new line. Every odd line on the console is representing a resource (e.g. Gold, Silver, Copper, and so on), and every even – quantity. Your task is to collect the resources and print them each on a new line. 
Print the resources and their quantities in format:
{resource} –> {quantity}
*/

bool mapSort(const map<string, int>& left, const map<string, int>& right) {
    return left < right;
}

int main()
{
    
    string line;
    int amount;
    unordered_map<string, int> myMap;
    while (true)
    {
        cin >> line;
        if (line == "stop") {
            break;
        }
        cin >> amount;
        myMap.insert({ line,amount });
    }
    for (unordered_map<string, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
       
        cout << it->first << " -> " << it->second << endl;
    }
}

