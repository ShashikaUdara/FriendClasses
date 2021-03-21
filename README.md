# FriendClasses
This is a simple demonstration of member classes in C++. The special thing in a friend class is the ability to access all the protected and private variables/functions of a class which declared as the friend. Hence this approach exposes hidden data of the implementation it reduces encapsulation.

Compile the source with following command

g++ main.cpp SimpleClass.h SimpleClass.cpp SimpleFriendClass.h SimpleFriendClass.cpp -o friend

Run in Linux: ./friend

Run in Windows: friend.exe
