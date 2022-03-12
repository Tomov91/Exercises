#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
//2 6 4 3 7

void bubbleSort(vector<int>& arr) {
    int n = arr.size(), i, j, temp;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nArray Sorted Successfully!\n";
    cout << "\nThe New Array is: \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = { 2 ,6 ,4 ,3 ,7 };
    bubbleSort(arr);
}

