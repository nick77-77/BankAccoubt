#include "Account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount : public Account
{
public:
	CheckingAccount(double = 0.0, double = 0.0);//constructor initialize balance and feeAmount

	//redefine member functions credit and debit
	virtual void credit(double cAmount);
	virtual bool debit(double dAmount);
	double getTransactionFee() const; //return transactionFee
	void checkingAccountTest(); //output
	virtual void MonthlyProcess();


private:
	double transactionFee;//a private data member of type double holds transaction Fee
	void setTransactionFee(double feeAmount);//functions determine whether a fee should be charged
};

#endif
