#include "stdafx.h"
#include <iostream>
#include "FunctionTest.h"

using namespace std;

char (*pFun)(int);

char fun(int a) {
	cout << "out: " << a;
	return a;
}

void testFun() {
	
	pFun = fun;
	
	char re = (*pFun)(4);
	
}


using namespace std;

typedef const char*(*funP)(string msg);

funP typeFun;

const char* fun0(string msgs) {
	const char* msgChar = msgs.c_str();
	cout << msgChar << "\n";

	return msgs.c_str();
}

void testFuns() {
	
	typeFun = fun0;
	(*typeFun)("test fun");
	
}