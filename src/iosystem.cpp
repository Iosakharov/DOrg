#include "iosystem.h"

  const bool DM = 1;
  char const *BasePath = "base/base.dorg";


	Iosystem::Iosystem ()
	{
		  if (DM) std::cout << "Iostream" << std::endl;
		//std::ofstream fileOut(BasePath);
		//std::ifstream fileIn(BasePath);
	}

	Iosystem::~Iosystem ()
	{
		if(fileIn.is_open()) fileIn.close();
		if(fileOut.is_open()) fileOut.close();
	}

	int Iosystem::Boom(int a)
	{
		  if (DM) std::cout << "Boom(" << a << ')' <<std::endl;
		return 0;
	}

  int Iosystem::ClearBase()
  {
    fileOut.open(BasePath, std::fstream::trunc);
    if (DM) {std::cout << "-ClearBase(void) " << fileOut.is_open() << "\n";}
    fileOut.close();
    return 0;
  }
	int Iosystem::WriteBase()
	{
		fileOut.open(BasePath, std::fstream::app);
		  if (DM)
      {
        std::cout << "-WriteBase(void) \n";

        if (fileOut.is_open())
			    std::cout << "--fileOut is open \n";
		    else
			    std::cout << "--fileOut is not open \n";
      }

		fileOut << " I'll gave you a Po-po-po-po-POWER!!" ;
    fileOut << "Terry is cool ";

		fileOut.close();
		return 0;
	}

  int Iosystem::WriteBase(const char* InText)
  {
    fileOut.open(BasePath, std::fstream::app);
    if (DM) { std::cout << "-WriteBase(const char*) \n";}
    fileOut << InText << " ";
    fileOut.close();
    return 0;
  }

	int Iosystem::ReadBase()
	{
		fileIn.open(BasePath);
    if (DM) { std::cout << "-ReadBase(void) " << fileIn.is_open() << '\n' ;}

		char listen[250];
		fileIn >> listen;
		std::cout << listen;

		fileIn.getline(listen,250);
		std::cout << listen << std::endl;
    //fileIn.getline(listen,250);
    std::cout << listen << std::endl;
    //fileIn.getline(listen,250);
    std::cout << listen << std::endl;
		fileIn.close();
		return 0;
	}
