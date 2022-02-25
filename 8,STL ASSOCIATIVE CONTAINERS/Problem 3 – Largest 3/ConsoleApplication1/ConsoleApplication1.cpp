#include<vector>
#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n = 3;
    vector<int> myVec{ 10 ,30 ,15 ,20 ,50, 5 };
    partial_sort(myVec.begin(), myVec.begin() + 3, myVec.end(), greater<int>());
    for (size_t i = 0; i < myVec.size(); i++)
    {
            cout << myVec[i] << " ";   
    }
    
}

