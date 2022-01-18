#include <iostream>
using namespace std;
int main()
{
    int n1, n2, numb1, numb2, temp, lcm, gcd;
    cin >> n1 >> n2;

    numb1 = n1;
    numb2 = n2;

    while (numb2 != 0) {
        temp = numb2;
        numb2 = numb1 % numb2;
        numb1 = temp;

    }
    gcd = numb1;
    lcm = (n1 * n2) / gcd;
    cout << gcd;
}
