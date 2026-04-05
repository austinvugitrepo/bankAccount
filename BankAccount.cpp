#include "BankAccount.h"

BankAccount::BankAccount(std::string f){ //parameter constructor implementation
filename = f;
accnum = 0;
initalb = 0.0;
yrir = 0.0;
msc = 0.0;
dsize = 0;
wsize = 0;
count = 0;
deposit = nullptr;
withdraw = nullptr;
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
txtfile.close(); //close file after done getting line count
return 0;
}

void BankAccount::readfile(){
deposit = new double[count];
withdraw = new double[count];
char tmp;
std::ifstream txtfile;
txtfile.open(filename);
for(int i = 0; i < count; i++){
txtfile >> tmp;

if(tmp == '#'){
txtfile >> accnum;
}
else if(tmp == 'b'){
txtfile >> initalb;
}
else if(tmp == 'i'){
txtfile >> yrir;
}
else if(tmp == 'c'){
txtfile >> msc;
}
else if(tmp == 'd'){
txtfile >> deposit[dsize];
dsize++;
}
else if(tmp == 'w'){
txtfile >> withdraw[wsize];
wsize++;
}

}

txtfile.close();
}

void BankAccount::displayinfo(){ //display func
double dtotal = 0.0; //for calculating total for deposit and withdraws
double wtotal = 0.0;

std::cout << "Account number: " << accnum << std::endl;
std::cout << "Initial balance: " << initalb << std::endl;
std::cout << "Annual Interest Rate: " << yrir << std::endl;
std::cout << "Monthly Service Charge: " << msc << std::endl;
std::cout << "Number of Deposits: " << dsize << std::endl;
std::cout << "Number of Withdraws: " << wsize << std::endl;
for(int i = 0; i < dsize; i++){
dtotal += deposit[i];
}
std::cout << "Total Deposit: " << dtotal << std::endl;
for(int i = 0; i < wsize; i++){
wtotal += withdraw[i];
}
std::cout << "Total Withdrawal: " << wtotal << std::endl;

double monir = yrir / 12; //monthly interest rate
double minterest = (initalb + dtotal - wtotal) * monir; //monthly interest
double finalb = initalb + dtotal - wtotal + minterest - msc; //final balance
std::cout << "Final balance: " << finalb << std::endl;
}

BankAccount::~BankAccount(){
delete [] deposit;
delete [] withdraw;
}
