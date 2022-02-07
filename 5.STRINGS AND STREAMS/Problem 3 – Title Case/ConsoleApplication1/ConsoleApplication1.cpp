#include<vector>
#include<string>
#include<sstream>
#include <iostream>

using namespace std;
int main()
{
    string expresion;
    getline(cin, expresion);

    for (size_t i = 1; i < expresion.size(); i++)
    {
        if (expresion[i-1] == ' ' and expresion[i]>96) {
            expresion[i] = expresion[i] - 32;
        }
    }
    cout << expresion << endl;
}

