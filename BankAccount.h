#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <fstream>
#include <string>

class BankAccount {

private:
	std::string filename;
public:
	BankAccount(std::string); // parameter constructor protype
        std::string name(){
        return filename;
        }



};

#endif
