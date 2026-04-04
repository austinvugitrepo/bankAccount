CXX = clang++
SRC = BankAccountMain.cpp BankAccount.cpp
EXE = bank
default:
	$(CXX) -g -o $(EXE) $(SRC)
run:
	./$(EXE)
clean:
	rm $(EXE) *~
