#include "iosystem.h"

int Boom(int a)
{
	std::cout << "Baaada Boom " << a << std::endl;
	return 0;
}

int WriteBase()
{
	std::ofstream fileOut("base/base.dorg");
	fileOut << "I'll gave you a Po-po-po-po-POWER!!" << std::endl;

	fileOut.close();
	return 0;
}

int ReadBase()
{
	std::ifstream fileIn("base/base.dorg");
	char listen[50];
	fileIn >> listen;
	std::cout << listen;

	fileIn.getline(listen,50);
	std::cout << listen << std::endl;

	fileIn.close();
	return 0;
}
