
#include<iostream>
using namespace std;

/*Write a program to calculate the (Euclidean) distance between two points p1 {x1, y1} and p2 {x2, y2}. 
You should write a class to represent such points and a method in it which calculates the distance from the point to another point.*/


float distance(int x1, int y1, int x2, int y2)
{
	
	return sqrt(pow(x2 - x1, 2) +
		pow(y2 - y1, 2) * 1.0);
}

int main()
{
	cout << distance(8, -2, -1, 5);
	return 0;
}
