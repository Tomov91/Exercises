#include<vector>
#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
class ShoppingList {
private:
    string name;
    double price;
    int count;
public:
    ShoppingList(string name, double price, int count) :
        name(name),
        price(price),
        count(count) {
    }

    double getPrice() { return price; }
    int getCount() { return count; }
    double summary(double& price,int& count) {
        double sum = price * count;
        return sum;
    }
    string getName() { return name; }
    double totalSum() {
        double sum=0;
        sum+= summary(price, count);
        return sum;
    }
};
int main()
{
    int numberOfShoppingItems;
    cin >> numberOfShoppingItems;
    string name;
    double price;
    int count;
    vector<double> myVec;
    map<string, double> myMap;
    double total = 0;
    while (numberOfShoppingItems--)
    {
        cin >> name;
        cin >> price;
        cin >> count;
        ShoppingList shopList(name, price, count);
        myMap.emplace(shopList.getName(), shopList.summary(price,count));
        myVec.emplace_back(shopList.summary(price, count));
        total += shopList.totalSum();
    }
    
    sort(myVec.begin(), myVec.end(),greater<double>());
    cout << "The total sum is " << total << " lv." << endl;
    for (auto n : myVec) {
    for (map<string, double>::iterator it = myMap.begin(); it != myMap.end(); it++) {
            if (it->second == n) {
                cout << it->first << " " << it->second << endl;
            }
        }
    }
}

