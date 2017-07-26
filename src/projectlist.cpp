#include "projectlist.h"

const bool DM = 1;

	ProjectList::ProjectList()
	{
		if (DM) std::cout << "-Class-ProjectList is wake up" << '\n';
		Projects.push_back("Oh");
		Projects.push_back("MY");
		Projects.push_back("good");
	}

	ProjectList::~ProjectList()
	{
		if (DM) std::cout << "-Class-ProjectList is go to sleep" << '\n';
	}

	int ProjectList::Add(const char* InText)
	{
		if (DM) std::cout << "-PL-Add(const char*)" << '\n';
		Projects.push_back(InText);
		return 0;
	}

	int ProjectList::ShowList()
	{
			if (DM) std::cout << "-PL-ShowList()" << '\n';
			copy(Projects.begin(),Projects.end(), std::ostream_iterator<const char*>(std::cout,"\n"));
			return 0;
	}
