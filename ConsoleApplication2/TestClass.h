#pragma once
#include <iostream>
class TestClass {
public:

	int* value;

	float value2;

	//Default Constructor
	TestClass() {
		value = new int(-1);
		value2 = 6.7;
		std::cout << "Default Constructor" << std::endl;
	}

	//Custom Constructor
	TestClass(int value, float value2) : value{ new int(value) }, value2{ value2 } {
		std::cout << "Custom Constructor" << std::endl;
	}


	//Copy Constructor
	TestClass(const TestClass& other) {
		std::cout << "Copy Constructor" << std::endl;
		//We can now do a deep copy 
		value = new int;
		*value = *other.value;
		value2 = other.value2;
	}


	//Copy Assignment Operator Overload
	TestClass& operator=(const TestClass& other) {
		std::cout << "Assignment Operator Overload" << std::endl;
		*value = *other.value;
		value2 = other.value2;
		return *this;
	}

	//Move constructor
	TestClass(TestClass&& other) noexcept {
		std::cout << "Move Constructor" << std::endl;
		value = other.value;
		value2 = other.value2;
		other.value2 = 0;
		other.value = nullptr;
	}
	
	//Move Assignment Operator Overload
	TestClass& operator=(TestClass&& other) noexcept {
		std::cout << "Move assignment overload" << std::endl;
		value = other.value;
		value2 = other.value2;
		other.value2 = 0;
		other.value = nullptr;
		return *this;
	}
	
	//Destructor
	~TestClass() {
		std::cout << "Destructor" << std::endl;
		delete value;
	}

	////Default defines - Nice practice if not overloading
		//~TestClass() = default;
		//TestClass(const TestClass& other) = default;
		//TestClass& operator= (const TestClass& other) = default;
		//TestClass(TestClass&& other) = default;
		//TestClass& operator= (TestClass&& other) = default;
};