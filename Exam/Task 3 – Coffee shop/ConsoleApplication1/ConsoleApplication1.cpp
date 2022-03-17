#include<vector>
#include<map>
#include<string>
#include <iostream>

using namespace std;

class Coffee {
private:
    string name;
    double price;
    double rating;
public:
    Coffee(string name, double price, double rating) :
        name(name),
        price(price),
        rating(rating) {

    }
    
        double getRating() {
        return rating;
    }
        double getPrice() { return price; }
        double changePrice() {
            if (rating > 4 and rating < 5.99) {
               double sum = price - price * 0.1;
                return sum;
            }
            else
            {
                return price;
            }
        }
        
};

int main()
{
    int numberOfDrinks;
    cin >> numberOfDrinks;
    string name;
    double price=0;
    double rating=0;
    map<string, double> myMap;
    while (numberOfDrinks--)
    {
        cin.ignore();
        getline(cin,name);
        cin >> price;
        cin >> rating;
        Coffee coffeeShop(name, price, rating);
       
        if (rating > 4) {
            myMap.emplace(name, coffeeShop.changePrice());
        }
    }
    for (map<string, double>::iterator it = myMap.begin(); it != myMap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

}

