// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TestClass.h"
#include <vector>

TestClass SomeFunction() {
	TestClass class1(6.7, 7);

	return class1;

}
int main()
{
	///Move Constructor + Move Assignment
	TestClass class2(4.5f, 6);
	class2 = SomeFunction();

	//Move Constructor
	TestClass class3 = SomeFunction();
	TestClass class4 = std::move(class2);

	//Copy Constructor
	TestClass class5(6.7, 7);
	TestClass class6(class5);

	//Copy Assignment
	TestClass class7(6.7, 7);
	TestClass class8(7.8, 9);
	class8 = class7;
	

}

