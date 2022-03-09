#include<string>
#include<vector>
#include <iostream>
using namespace std;
class BankAccount {
private:
	string userName;
	string accNum;
	float balance;
public:
	BankAccount(string userName, string accNum, float balance) :
		userName(userName),
		accNum(accNum),
		balance(balance) {
	}

	float getBalance() { return balance; }
	void addBalance(float addedbalance) {
		balance += addedbalance;
		cout << "Added:" << addedbalance << endl;
		cout << "New Balance:" << balance << endl;
	}
	void showInfo() {
		cout << "Name " << userName << endl;
		cout << "Account number: " << accNum << endl;
		cout << "Balance:" << balance;
	}
	void withdrawBalance(float withdraw) {
		
		if (withdraw > balance) {
			cout << "Not Enought Balance !" << endl;
			return;
		}
		balance -= withdraw;
		cout << "New Balance:" << balance << endl;
	}
};

void options(BankAccount& acc) {
	cout << "Would you like to do ?" << endl;
	cout << "Press 1 to Show All Information..." << endl;
	cout << "Press 2 to Add Balance..." << endl;
	cout << "Press 3 to Withdraw Balance..." << endl;
	cout << "Press 0 to Exit Program..." << endl;
	int choice;
	cin >> choice;
		float balanceChange;
	switch (choice)
	{
	case 1:
		acc.showInfo();
		break;
	case 2:
		cout << "Enter Balance to Add:" << endl;
		cin >> balanceChange;
		acc.addBalance(balanceChange);
		options(acc);
		
	case 3:
		cout << "Enter balance to withdraw:" << endl;
		cin >> balanceChange;
		acc.withdrawBalance(balanceChange);
		options(acc);
	case 0:
		break;

	default:
		break;
	}
}

int main()
{
	string userName;
	cout << "Enter name:" << endl;
	cin >> userName;
	cout << "Enter 5 charactes IBAN Code: " << endl;
	string accNum;
	cin >> accNum;
	cout << "Enter Initial Balance:" << endl;
	float balance;
	cin >> balance;
	BankAccount account(userName,accNum,balance);

	options(account);


}

