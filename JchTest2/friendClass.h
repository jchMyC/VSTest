#pragma once
#include <iostream>
#include <stdio.h>
#include <memory>

class TestClass
{
	
public:
	friend class FriendClass;
	TestClass();
	std::string GetMsg();
	~TestClass();

private:
	std::string msg;
};

class FriendClass
{
public:
	FriendClass();
	~FriendClass();

	void SetMsg(std::string msg, std::unique_ptr<TestClass> test);

private:

};


void testFriendClass();