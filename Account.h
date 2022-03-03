#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double = 0.0);//constructor initialize balance

	//functions to add subtract from balance 
	virtual void credit(double cAmount);
	virtual bool debit(double dAmount);
	double getBalance() const;//functions to return Balance	
	void accountTest();//output
	void MonthlyProcess();

protected:double balance; //a protected data member of type double stores balance

private:
	void setBalance(double newAmount); //functions to set Balance
};

#endif#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double = 0.0);//constructor initialize balance

	//functions to add subtract from balance 
	virtual void credit(double cAmount);
	virtual bool debit(double dAmount);
	double getBalance() const;//functions to return Balance	
	void accountTest();//output
	void MonthlyProcess();

protected:double balance; //a protected data member of type double stores balance

private:
	void setBalance(double newAmount); //functions to set Balance
};

#endif
