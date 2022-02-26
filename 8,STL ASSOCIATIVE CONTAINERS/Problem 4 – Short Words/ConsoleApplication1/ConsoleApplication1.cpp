#include<set>
#include<string>
#include <iostream>
#include<algorithm>
#include<sstream>
using namespace std;
/*Read a text, extract its words (separated by spaces) find all short words (less than 5 characters) and print them alphabetically, in lowercase, separate by a single comma and a single space
•	Use case-insensitive matching.
•	Remove duplicated words.
*/
int main()
{
    int count = 0;
    string line;
    string tempstr;
    getline(cin, line);
    set<string> mySet;

    stringstream str(line);
    while (str >> tempstr)
    {
        transform(tempstr.begin(), tempstr.end(), tempstr.begin(), ::tolower);
        mySet.insert(tempstr);
    }
    for (string s : mySet) {
        for (char c : s) {
            count++;
        }
            if (count < 5) {
                cout << s << ", ";
            }
        count = 0;
    }
}
