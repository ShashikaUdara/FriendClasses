#include <iostream>
#include "SimpleClass.h"
#include "SimpleFriendClass.h"

using namespace std;

int main()
{
	// This is a simple demonstration of member classes in C++. 
	// The special thing in a friend class is the ability to access all the protected and private variables/functions 
	// of a class which declared as the friend. 
	// Hence this approach exposes hidden data of the implementation it reduces encapsulation.

	// accessing all the data through the main function
	cout<<"This is main function"<<endl;
	SimpleClass sc;

	sc.publicFunction();
	// sc.protectedFunction(); // This protected function can't be access through the main function
	// sc.privateFunction(); // This private function can't be access through the main function

	cout<<sc.str1<<endl;
	// cout<<sc.str2<<endl; // This protected variable can't be accessed through the main function.
	// cout<<sc.str3<<endl; // This private variable can't be accessed through the main function.

	// SimpleFriendClass object created
	SimpleFriendClass sfc;

	// Letting friend class functions to access the SimpleClss data
	// All the fucntions must be executed without any problem
	sfc.accessFriendsFunctions_PublicFuncton(sc);
	// sfc.accessFriendsFunctions_ProtectedFuncton(sc); // This function is protected
	// sfc.accessFriendsFunctions_PrivateFuncton(sc); // This function is private


}