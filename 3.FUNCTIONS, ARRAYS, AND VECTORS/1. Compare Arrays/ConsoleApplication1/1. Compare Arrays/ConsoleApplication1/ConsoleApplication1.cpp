#include<vector>
#include <iostream>
#include<string>
using namespace std;



void task(){

	vector<int> auspuh;
	vector<int> numbers;
	int n;
	int m;
	int b;
	int a;
	cin >> n;
	for (size_t i = 0; i <n; i++)
	{
		cin >> m;
		auspuh.push_back(m);
		cout << auspuh[i] << " ";
	}
	cin >> a;
	for (size_t j = 0; j < a; j++)
	{
		cin >> b;
		numbers.push_back(b);
		cout << numbers[j] << " ";
	}
	for (size_t i = 0; i < auspuh.size(); i++)
	{
			if (numbers[i] == auspuh[i]) {
				cout << "equal" << endl;
			}
			else
			{
				cout << "not equal" << endl;
			}
		
	}

}







bool areEqual(int arr1[], int length1, int arr2[], int length2) {
	bool status = true;
	if (length1 != length2) {
		return false;
	}

	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] == arr2[i]) {
			status = true;
		}
		else
		{
			status = false;
		}
	}
		return status;
}

int main()
{
	task();
	
	int arr1[]{ 1,2,3 };
	int arr2[]{ 1,2,3 };
	int n = sizeof(arr1)/sizeof(int);
	int m = sizeof(arr2)/sizeof(int);

	/*areEqual(arr1, n, arr2, m);

	 if (areEqual(arr1, n, arr2, m)) {
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	};*/ 
}
