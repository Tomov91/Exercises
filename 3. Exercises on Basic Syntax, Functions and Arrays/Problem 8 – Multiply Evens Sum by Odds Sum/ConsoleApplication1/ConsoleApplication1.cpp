//Create a program that reads an integer number and multiplies the sum of all its even digits by the sum of all its
//odd digits 

#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int even=0;
    int  odd=0;
    string input = to_string(n);
    for (size_t i = 0; i < input.size(); i++)
    {
        if(input[i]%2 == 0)
        even += input[i]-48;
        else
            odd += input[i]-48;
        
    }
       
    int result = int(even) * (int)odd;
    cout << result;
}

