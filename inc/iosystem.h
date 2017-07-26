#ifndef IOSYSTEM_H
#define IOSYSTEM_H

#include <iostream>
#include <fstream>



class Iosystem
{
public:
	std::ofstream fileOut;
	std::ifstream fileIn;
	Iosystem (void);
	~Iosystem (void);
	int Boom(int a);
	int ClearBase();
	int WriteBase();
	int WriteBase(const char*);
	int ReadBase();

};

#endif
