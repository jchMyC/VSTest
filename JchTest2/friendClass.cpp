#include "stdafx.h"
#include "friendClass.h"
#include <stdlib.h>

using namespace std;


TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

string TestClass::GetMsg() {
	return msg;
}

FriendClass::FriendClass()
{
}

void FriendClass::SetMsg(string msg, std::unique_ptr<TestClass> test) {
	
	test.get()->msg = msg;
	
	cout << "set msg with friend class: " << test.get()->msg.c_str() << endl;

}


FriendClass::~FriendClass()
{
}

void testFriendClass() {
	
	unique_ptr<TestClass> test(new TestClass());
	
	unique_ptr<FriendClass> friendClass(new FriendClass());
	friendClass.get()->SetMsg(" message data ", move(test));
	
//	cout << "after msg : " << test.get()->GetMsg().c_str() << endl;

}