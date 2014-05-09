#include "AssignmentOperator.h"

void main() {

	//create obj1
	MyClass *obj1 = new MyClass("Hello World");
	obj1->Print();

	//assignment of obj1 to obj2
	MyClass obj2;	//using empty ctor
	obj2 = *obj1;

	//cleanup
	delete obj1;

	obj2.Print();

	getchar();
}