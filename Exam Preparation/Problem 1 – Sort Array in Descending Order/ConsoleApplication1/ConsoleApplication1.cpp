#include<vector>
#include <iostream>

using namespace std;

void print(vector<int> a, int n)
{
    for (int i = 0; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sort(vector<int> a, int n)
{
    for (int i = n; i >= 0; i--)
        for (int j = n; j > n - i; j--)
            if (a[j] > a[j - 1])
                swap(a[j], a[j - 1]);
    print(a, n);
}


int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (size_t i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        arr.push_back(m);
    }
	
    sort(arr, n-1);

}

