#include <iostream>
#include <fstream>
#include "iosystem.h"

using namespace std;
int Boom(int a)
{
	cout << "Baaada Boom " << a << endl;
	return 0;
}

int WriteBase()
{
	std::ofstream fileOut("base/base.dorg");
	fileOut << "I'll gave you a Po-po-po-po-POWER!!" << endl;

	fileOut.close();
	return 0;
}

int ReadBase()
{
	std::ifstream fileIn("base/base.dorg");
	char listen[50];
	fileIn >> listen;
	cout << listen;

	fileIn.getline(listen,50);
	cout << listen << endl;

	fileIn.close();
	return 0;
}

int main()
{
	cout << "DOrg \n";
	Boom(2);
	WriteBase();
	ReadBase();
	return 0;
}
