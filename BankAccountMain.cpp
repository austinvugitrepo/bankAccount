#include "BankAccount.h"

int main(){

std::string file;
std::cout << "Enter name of bank file: ";
std::getline(std::cin, file);

// object that i give file too
BankAccount acc(file);

std::cout << "The file name is: " << acc.name() << std::endl; 





return 0;
}
