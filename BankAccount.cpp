#include "BankAccount.h"

BankAccount::BankAccount(std::string f){ //parameter constructor implementation
filename = f;
accnum = 0;
initalb = 0.0;
yrir = 0.0;
msc = 0.0;
size = 0;
count = 0;
}

int BankAccount::setnumofline(){
std::ifstream txtfile;
txtfile.open(filename);
if(!(txtfile.is_open())){
std::cout << "Could not open " << filename << std::endl;
return 1;
}

std::string tmp; // tmp variable to use to read lines (no data is saved cuz it will be overwritten eachline)
//if filename can be opened:
std::getline(txtfile, tmp); // read a line
count++;
while(!(txtfile.eof())){  // while not reaching end of file
std::getline(txtfile, tmp);
count++;
}
return count;
}
