#include<string>
#include <iostream>
#include<sstream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

void getOddOccurrence(vector<string>& arr)
{
    set<string> mySet;
    for (int i = 0; i < arr.size(); i++) {

        int count = 0;

        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            mySet.insert(arr[i]);
    }
    
    for (set<string>::reverse_iterator it = mySet.rbegin(); it != mySet.rend(); it++) {
        cout << *it << ", ";
    }
    
}

int main()
{
    string line;
    getline(cin, line);
    stringstream str(line);
    string word;
    vector<string> arr;
    while (str>>word)
    {
        std::for_each(word.begin(), word.end(), [](char& c) {
            c = ::tolower(c);
            });
        arr.push_back(word);;
    }
    //transform(arr.begin(), arr.end(), arr.begin(), ::tolower);
    getOddOccurrence(arr);
}
