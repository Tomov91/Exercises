#include<string>
#include<vector>
#include <iostream>
using namespace std;
class Country {
private:
	string name;
	string capital;
	int population;
public:
	Country(string name, string capital, int population) :
		name(name),
		capital(capital),
		population(population) {
	}
	int getPopulation() { return population; }
	void getData() {
		cout << "Country->" << name << endl;
		cout << "Capital->" << capital << endl;
		cout << "Population->(milions)" << population << endl;
	}
};

int main()
{
	int numOfCountries;
	cin >> numOfCountries;
	string name;
	string capital;
	int population;
	vector<Country> myVec;
	while (numOfCountries--)
	{
		cout << "Enter Country -> " <<  endl;
		cin >> name;
		cout << "Enter Capital -> " << endl;
		cin >> capital;
		cout << "Enter Population -> " <<  endl;
		cin >> population;
		myVec.push_back(Country(name, capital, population));
	}
	cout << "Which is the populations (millions) that you want to filter ? " << endl;
	int popfilter;
	cin >> popfilter;
	cout << "The countries with Population " << popfilter << " millions are : " << endl;

	for (vector<Country>::iterator it = myVec.begin(); it != myVec.end(); it++) {
		if (it->getPopulation() == popfilter) {
			it->getData();
		}
	}

}
