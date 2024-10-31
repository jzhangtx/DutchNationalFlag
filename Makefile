DutchNationalFlag: DutchNationalFlag.o
	g++ -g -o DutchNationalFlag.exe DutchNationalFlag.o -pthread    

DutchNationalFlag.o: DutchNationalFlag/DutchNationalFlag.cpp
	g++ -g  -c -pthread DutchNationalFlag/DutchNationalFlag.cpp
