
#include <iostream>
#include <string>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    string nums;
    getline(cin, nums);
    int counter = 0;
    istringstream stream(nums);
    char n;
    vector<char> vec;

    while (stream >> n) {
        vec.push_back(n);
    }
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] == ')' or vec[i] == '(') {
            counter++;
        }
    }
    if (counter % 2 == 0) {
        cout << "correct" << endl;
    }
    else
    {
        cout << "incorrect" << endl;    
    }
}

