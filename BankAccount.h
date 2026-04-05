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
	int dsize; //for number of deposits
	int wsize; //for number of withdraws
	int count; // for num of lines
	double* deposit;
	double* withdraw;
public:
	BankAccount(std::string); // parameter constructor protype
	int setnumofline(); // get number of lines from file
	void readfile(); //actually read the file now that we have the count from the previous read
	void displayinfo();


};

#endif
