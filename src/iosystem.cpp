#include "iosystem.h"

int iosystem::WriteBase()
{
	fileOut << "I'll gave you a Po-po-po-po-POWER!!" << endl;

	fileOut.close();
	return 0;
}

int iosystem::Boom(int a)
{
	std::cout << "Baaada Boom " << a << endl;
}

int iosystem::ReadBase()
{
	char listen[50];
	fileIn >> listen;
	std::cout << listen << endl;

	fileIn.getline(listen,50);
	std::cout << listen << endl;

	fileIn.close();
	return 0;
}
