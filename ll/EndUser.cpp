#include "Person.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
	Person p;
	WriteReadSort sys;
	
	sys.WritePerson();
	sys.ReadPerson();

	return 0;
}