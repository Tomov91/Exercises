#include<vector>
#include <iostream>
#include<sstream>
#include<istream>
#include<string>
#include<fstream>

using namespace std;

bool equalOrNot(vector<int> numeroUno, vector<int> numberoDuo, int a, int b) {
    if (a != b) {
        return false;
    }
    for (size_t i = 0; i < numeroUno.size(); i++)
    {
        if (numeroUno[i] != numberoDuo[i]) 
            return false;
    }
    return true;
}


int main()
{
    string nums;
    string nums2;    // the numbers in the format "1 2 3 4 10 -20"
    getline(cin, nums);
    getline(cin, nums2);

    istringstream stream(nums);
    istringstream stream2(nums2);
    int n;
    int m;
    std::vector<int> vec;
    while (stream >> n) {
        vec.push_back(n);
    }
    vector<int> vec2;
    while (stream2 >> m)
    {
        vec2.push_back(m);
    }
    if (equalOrNot(vec,vec2,n,m) ){

        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
}

