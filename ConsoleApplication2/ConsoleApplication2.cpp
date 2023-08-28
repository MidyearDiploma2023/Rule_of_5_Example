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
   // std::vector<TestClass> testClasss;
   ///* testClasss.reserve(10);*/

   // for (int i = 0; i < 1000; i++) {
   //     testClasss.push_back(TestClass(i, i));
   // }

	TestClass class2(4.5f, 6);

	class2 = SomeFunction();


   
}

