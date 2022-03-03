#include "Account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount : public Account
{
public:
	SavingsAccount(double = 0.0, double = 1.0);//constructor initialize balance and Rate
	double calculateInterest();//functions to calculate Interest
	double getInterestrRate() const;
	void savingsAccountTest();//output
	virtual void MonthlyProcess();

private:
	double interestrRate;//a private data member of type double interestr Rate
	void setInterestrRate(double rateAmount);//a private functions set balance
};

#endif
