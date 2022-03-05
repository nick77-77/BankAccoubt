// Yodhe Desta
// AccountInheritanceTest
// PE 11-10
//Test code that creates objects of each class and tests their member functions.
#include "Account.h" 
#include "SavingsAccount.h" 
#include "CheckingAccount.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

	const int SIZE = 3;

	// creating three account
	vector<Account*>account(SIZE);

	double interest;
	double withdraw;
	double deposit;

	account[0] = new SavingsAccount(100, 0.03);
	account[1] = new CheckingAccount(200, 1);
	account[2] = new SavingsAccount(300, 0.02);

	for (int i = 0; i < SIZE; i++) {

		cout << "Processing Account number " << (i + 1) << " balance: $" << account[i]->getBalance() << endl;

		// debit
		cout << "Enter amount for debit: ";
		cin >> withdraw;
		account[i]->debit(withdraw);

		// credit
		cout << "Enter amount to credit: ";
		cin >> deposit;
		account[i]->credit(deposit);

		// type of acount
		SavingsAccount* sav = dynamic_cast<SavingsAccount*>(account[i]);
		if (sav != NULL) {

			cout << "Account is of Saving type" << endl;
			interest = sav->calculateInterest();
			cout << "Interest owned: " << interest << endl;
			sav->credit(interest);
		}
		else 
		{
			cout << "Account " << (i + 1) << " is of Checking type" << endl;
		}
		cout << "Final balance: " << account[i]->getBalance() << endl << endl;
	}

	// deleting the objects
	for (int i = 0; i < SIZE; i++)
		delete account[i];
	return 0;

}
















