#include <iostream>
#include <fstream>
#include "iosystem.h"
#include "projectlist.h"

using namespace std;

class Class
{
public:
	Class(void)
	{
		cout << "Void class created" << endl;
	}
	Class(int Number)
	{
		cout << "Class with Number created" << endl;
	}
	~Class()
	{
	}
};

int main()
{
	cout << "DOrg \n";
	Class ClassInMain;
	Iosystem IOS;
	IOS.ClearBase();
	IOS.WriteBase("Boom");
	IOS.WriteBase();
	IOS.ReadBase();
	//Boom(2);
	//WriteBase();
	//ReadBase();
	ProjectList PL;
	PL.ShowList();
	PL.Add("You are lucky!!!");
	PL.ShowList();
	return 0;
}
