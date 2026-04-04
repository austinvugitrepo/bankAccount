#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <fstream>
#include <string>

class BankAccount {

private:
	std::string filename;
	int accnum; //acc number
	double initalb; //inital balance
	double yrir; // yearly interest rate
	double msc; //monthly service charge
	int size; //for number of deposits and withdraws
	int count; // for num of lines
public:
	BankAccount(std::string); // parameter constructor protype
	int setnumofline(); // get number of lines from file




};

#endif
