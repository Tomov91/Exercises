#include<string>
#include<vector>
#include <iostream>
using namespace std;
class RationalNumbers {
private:
    int numerator;
    int denominator;
    RationalNumbers(int numerator, int denominator) :
        numerator(numerator),
        denominator(denominator) {

    }
    void sum(int numerator, int numerator2, int denominator, int denominator2) {
        for (size_t i = 0; i < 100; i++)
        {
            if (denominator % i == 0 and denominator2 % i == 0) {

            }
        }
    }

};
int main()
{
    int numerator, numerator2;
    int denominator, denominator2;
    cout << "Enter first rational number numerator:";
    cin >> numerator;
    cout << "Enter first rational number denominator:";
    cin >> denominator;
    cout << "Enter second rational number numerator:";
    cin >> numerator2;
    cout << "Enter second rational number denominator:";
    cin >> denominator2;

}

