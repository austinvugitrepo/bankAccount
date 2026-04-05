#include "BankAccount.h"

int main(){

std::string file;
std::cout << "Enter name of bank file: ";
std::getline(std::cin, file);
// object that i give file too
BankAccount acc(file);
int linenum = acc.setnumofline();
if(linenum == 1){
return 1;
}
acc.readfile();
acc.displayinfo();

return 0;
}
