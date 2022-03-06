#include<vector>
#include<string>
#include<map>
#include <iostream>
using namespace std;
class Sale {
private:
    string town;
    string product;
    double price;
    double quantity;
public:
    Sale(string town, string product, double price, double quantity) :
        town(town),
        product(product),
        price(price),
        quantity(quantity) {}

    void sort(map<string, double>& input) {
        input[town] += price * quantity;
    }
};

void print(map<string, double>& print) {
    cout.setf(ios::fixed);
    cout.precision(2);
    for (auto it = print.begin(); it != print.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }
}
int main()
{
    map<string, double> result;
    int n;
    cin >> n;
    while (n--)
    {
        string town;
        string product;
        double price;
        double quantity;
        cin >> town >> product >> price >> quantity;
        Sale currentObject(town, product, price, quantity);
        currentObject.sort(result);

    }

    print(result);

}

