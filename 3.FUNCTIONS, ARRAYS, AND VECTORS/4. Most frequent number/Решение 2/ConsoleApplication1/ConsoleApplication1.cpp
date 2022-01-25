﻿#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
    int max_count = 0;
    cout << "\nMost occurred number: ";
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;
        if (count > max_count)
            max_count = count;
    }

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;
        if (count == max_count)
            cout << nums[i] << " ";
    }
}

int main()
{
    int nums[] = { 4 ,1 ,1 ,4 ,2 ,3 ,4 ,4 ,1 ,2 ,4 ,9 ,3 };
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    most_occurred_number(nums, n);
}


