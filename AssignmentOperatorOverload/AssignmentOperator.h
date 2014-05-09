#include <iostream>
using namespace std;

class MyClass {

private:
	char *str;

public:
	//default ctor for empty objects of type MyClass
	MyClass() {
	}

	//ctor with parameter
	MyClass(char* aStr) {
		cout << "In constructor..." << endl;
		str = strdup(aStr);
	}

	//Copy assignment
	MyClass& operator=(const MyClass& other) {
		cout << "In copy assignment... " << endl;
		str = strdup(other.str);
		return *this;
	}

	void Print() {
		cout << str << endl;
	}

	~MyClass() {
		cout << "In destructor..." << endl;
		delete str;
	}

};