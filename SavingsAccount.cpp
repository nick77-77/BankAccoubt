#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>


SavingsAccount::SavingsAccount(double initialBalance, double Rate) :Account(initialBalance) //constructor initialize balance and Rate
{
	setInterestrRate(Rate);
}

double SavingsAccount::calculateInterest()//functions  calculate Interest multiple balance * interestrRate and returns it 
{
	return balance * interestrRate;
}

double SavingsAccount::getInterestrRate() const
{
	return interestrRate;
}

void SavingsAccount::savingsAccountTest() //output
{
	std::cout << "\n--------------Saving Account-------------------" << std::endl;
	std::cout << std::left << "\nSaving Balance:$" << balance << std::endl;
	credit(200.00);
	std::cout << std::left << "Deposit amount $200.00 ---> Balance:  $" << balance << std::endl;
	debit(80.00);
	std::cout << std::left << "Withdrawing amount $80.00 ---> Balance:  $" << balance << std::endl;
	credit(calculateInterest());
	std::cout << std::left << "Balance after calculated interest ---> Balance:  $" << balance << std::endl;
	std::cout << "**************************************************" << std::endl;
}


void SavingsAccount::setInterestrRate(double interestAmount) //validate it to make sure the entered number interestAmount is postive number
{
	if (interestAmount <= 0.0)
	{
		interestAmount = 1.0;

	}
	interestrRate = interestAmount;
}

void SavingsAccount::MonthlyProcess()
{
	calculateInterest();
}
