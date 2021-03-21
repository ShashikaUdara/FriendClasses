#ifndef SIMPLEFRIENDCLASS_H
#define SIMPLEFRIENDCLASS_H

#include <iostream>
#include "SimpleClass.h"

using namespace std;

// Every function declared here in the SimpleFriendClass is able to access each and every variable and function of the SimpleClass

class SimpleFriendClass
{
public:
	SimpleFriendClass() {}
	~SimpleFriendClass() {}
	void accessFriendsFunctions_PublicFuncton(SimpleClass simpleC);
	void accessFriendsVariables_PublicFuncton(SimpleClass simpleC);

protected:
	void accessFriendsFunctions_ProtectedFuncton(SimpleClass simpleC);
	void accessFriendsVariables_ProtectedFuncton(SimpleClass simpleC);

private:
	void accessFriendsFunctions_PrivateFuncton(SimpleClass simpleC);
	void accessFriendsVariables_PrivateFuncton(SimpleClass simpleC);
};

#endif