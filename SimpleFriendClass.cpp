#include "SimpleFriendClass.h"

void SimpleFriendClass :: accessFriendsFunctions_PublicFuncton(SimpleClass simpleC)
{
	cout<<"This is accessFriendsFunctions_PublicFuncton"<<endl;
	simpleC.publicFunction();
	simpleC.protectedFunction();
	simpleC.privateFunction();

	cout<<simpleC.str1<<endl;
	cout<<simpleC.str2<<endl;
	cout<<simpleC.str3<<endl;
}

void SimpleFriendClass :: accessFriendsFunctions_ProtectedFuncton(SimpleClass simpleC)
{
	cout<<"This is accessFriendsFunctions_ProtectedFuncton"<<endl;
	simpleC.publicFunction();
	simpleC.protectedFunction();
	simpleC.privateFunction();

	cout<<simpleC.str1<<endl;
	cout<<simpleC.str2<<endl;
	cout<<simpleC.str3<<endl;
}

void SimpleFriendClass :: accessFriendsFunctions_PrivateFuncton(SimpleClass simpleC)
{
	cout<<"This is accessFriendsFunctions_PrivateFuncton"<<endl;
	simpleC.publicFunction();
	simpleC.protectedFunction();
	simpleC.privateFunction();

	cout<<simpleC.str1<<endl;
	cout<<simpleC.str2<<endl;
	cout<<simpleC.str3<<endl;
}
