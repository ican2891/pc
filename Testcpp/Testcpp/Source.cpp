#include <iostream>
#include <memory>
using namespace std;

//Windows based Heap memory checker(This should be moved to seperate file)
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifdef _DEBUG
#define DEBUG_NEW new( _CLIENT_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW
#else
#define DEBUG_CLIENTBLOCK
#endif // _DEBUG

class test_object
{
public:
	int a;
	test_object() {
		std::cout << "test_object::Create test_object" << std::endl;
	}
	~test_object() {
		std::cout << "test_object::destroyed test_object" << std::endl;
	}
};

class Test_unique
{
private :
	//std::unique_ptr<test_object> p;
public:
	Test_unique() {
		//std::unique_ptr<test_object> p(new test_object());
		//std::shared_ptr<test_object> p(new test_object());
		/*class test_object  *p = new test_object;*/
	}
	~Test_unique() { }
};

void test_me(void)
{
	Test_unique tu;
}

void main(void)
{
	std::cout << "Before calling function" << std::endl;
	test_me();
	std::cout << "After calling function" << std::endl;
	_CrtDumpMemoryLeaks();
}
//What are the inferences which we have 
// 1.Smart pointers call the destructors once they are out of scope
// 2. The raw pointers are root of all evil.

