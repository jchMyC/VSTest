#include "friendFunction.h"
JchA::JchA()
{
}

JchA::~JchA()
{
}

string JchA::GetMsg() {
	
	return msg;
}

void friendFun(string msg, JchA* jchA) {

	jchA->msg = msg;
	
	cout << jchA->msg.c_str() << endl;
}


void testFiendFunaa() {

	JchA *jchA = new JchA();

	friendFun("msg a : ", jchA);

	cout << jchA->GetMsg().c_str() << endl;
}