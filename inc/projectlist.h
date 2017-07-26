#include <iostream>
#include <list>
#include <iterator>


class ProjectList
{
private:
	std::list< const char* > Projects;
public:
	ProjectList();
	~ProjectList();
	int Add(const char*);
	int ShowList();
};
