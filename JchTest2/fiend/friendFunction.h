#pragma once
#ifndef FRIEND_FUNCTION
#define FRIEND_FUNCTION
#include <stdarg.h>
#include <iostream>

using namespace std;

void testFiendFunaa();

class JchA
{
	friend void friendFun(string msg, JchA* jchA);
public:
	JchA();
	~JchA();
	
	string GetMsg();

private:

	string msg;
};


#endif