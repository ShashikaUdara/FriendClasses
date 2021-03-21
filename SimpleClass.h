#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H

#include <iostream>

using namespace std;

class SimpleClass
{
public:
	SimpleClass() {}
	~SimpleClass() {}
	void publicFunction();
	
	friend class SimpleFriendClass;

	string str1 = "This is a public variable";

protected:
	void protectedFunction();

	string str2 = "This is a protected variable";

private:
	void privateFunction();

	string str3 = "This is a private variable";

};

#endif