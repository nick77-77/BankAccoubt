#include "CheckingAccount.h"
#include <iostream>
#include <iomanip>


CheckingAccount::CheckingAccount(double initialBalance, double feeAmount) //constructor initialize balance and feeAmount 
	:Account(initialBalance)
{
	setTransactionFee(feeAmount);
}

void CheckingAccount::credit(double creditAmount) //redefine member functions credit add to balance
{
	Account::credit(creditAmount);
	Account::debit(transactionFee);
}


bool CheckingAccount::debit(double debitAmount) //redefine member functions  debit subtract from balance and subtracts transactionFee from balance
{
	if (Account::debit(debitAmount))
	{
		Account::debit(transactionFee);
		return true;
	}
	else 
	{
		return false;
	}
}

double CheckingAccount::getTransactionFee()const ////return transactionFee
{
	return transactionFee;
}

void CheckingAccount::checkingAccountTest() //ouput
{
	std::cout << "\n--------------Checking Account-------------------" << std::endl;
	std::cout << std::left << "\nChecking Balance:$" << balance << std::endl;
	credit(300.00);
	std::cout << std::left << "Deposit amount $300.00 & $1.00 FEE ---> Balance:  $" << balance << std::endl;
	debit(150.00);
	std::cout << std::left << "Withdrawing amount $150.00 ---> Balance:  $" << balance << std::endl;
	std::cout << "**************************************************" << std::endl;
}

void CheckingAccount::setTransactionFee(double transAmount)// checks if feeAmount greater than 0
{
	if (transAmount < 0.0)
	{
		transAmount = 0.0;
	}
	transactionFee = transAmount;
}

void CheckingAccount::MonthlyProcess()
{
	getTransactionFee();
}
#include "CheckingAccount.h"
#include <iostream>
#include <iomanip>


CheckingAccount::CheckingAccount(double initialBalance, double feeAmount) //constructor initialize balance and feeAmount 
	:Account(initialBalance)
{
	setTransactionFee(feeAmount);
}

void CheckingAccount::credit(double creditAmount) //redefine member functions credit add to balance
{
	Account::credit(creditAmount);
	Account::debit(transactionFee);
}


bool CheckingAccount::debit(double debitAmount) //redefine member functions  debit subtract from balance and subtracts transactionFee from balance
{
	if (Account::debit(debitAmount))
	{
		Account::debit(transactionFee);
		return true;
	}
	else 
	{
		return false;
	}
}

double CheckingAccount::getTransactionFee()const ////return transactionFee
{
	return transactionFee;
}

void CheckingAccount::checkingAccountTest() //ouput
{
	std::cout << "\n--------------Checking Account-------------------" << std::endl;
	std::cout << std::left << "\nChecking Balance:$" << balance << std::endl;
	credit(300.00);
	std::cout << std::left << "Deposit amount $300.00 & $1.00 FEE ---> Balance:  $" << balance << std::endl;
	debit(150.00);
	std::cout << std::left << "Withdrawing amount $150.00 ---> Balance:  $" << balance << std::endl;
	std::cout << "**************************************************" << std::endl;
}

void CheckingAccount::setTransactionFee(double transAmount)// checks if feeAmount greater than 0
{
	if (transAmount < 0.0)
	{
		transAmount = 0.0;
	}
	transactionFee = transAmount;
}

void CheckingAccount::MonthlyProcess()
{
	getTransactionFee();
}
