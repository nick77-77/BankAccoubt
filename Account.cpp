#include "Account.h"
#include <iostream>
#include <iomanip>


Account::Account(double initialBalance) //constructor initialize balance
{
	setBalance(initialBalance);
}

//functions to credit balance
//if the credit Amount  less than 0
//it will print out credit Amount was invalid
//it will set credit Amount to 0, balance = balance + creditAmount;
void Account::credit(double creditAmount)
{
	if (creditAmount < 0.0)
	{
		creditAmount = 0.0;
		std::cout << "Please deposite postive number" << std::endl;
	}
	balance = balance + creditAmount;
}

bool Account::debit(double debitAmount)//function to subtract from balance //return true or false if money was taken out

{
	if (debitAmount > balance)
	{
		std::cout << "Debit amount exceeded account balance." << std::endl;
		return false;
	}
	else if (debitAmount < 0.0)
	{
		std::cout << "Please deposite postive number" << std::endl;
		return false;
	}
	else
	{
		balance = balance - debitAmount;
		return true;
	}
}

double Account::getBalance() const //functions to return Balance
{
	return balance;
}


void Account::accountTest() //functions to output account Test info
{
	std::cout << "\n-----------------Account---------------------" << std::endl;
	std::cout << std::left << "\nAccount Balance:$" << balance << std::endl;
	credit(1000.00);
	std::cout << std::left << "Deposit amount $1000.00 ---> Balance:  $" << balance << std::endl;
	debit(650.00);
	std::cout << std::left << "Withdrawing amount $650.00 ---> Balance:  $" << balance << std::endl;
	std::cout << "**************************************************" << std::endl;


}

//function setBalance 
//if the initial Balance  less than 0
//it will print out initial Balance was invalid
//it will set initialBalance to 0 else balance = initialBalance

void Account::setBalance(double amount)
{
	if (amount < 0.0)
	{
		amount = 0.0;
		std::cout << "The initial balance was invalid" << std::endl;
	}
	balance = amount;
}

void Account::MonthlyProcess()
{

}
