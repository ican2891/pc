//#include <iostream>
//using namespace std;
//
//class Imath
//{
//public:
//	virtual int add(int a, int b) = 0;
//	virtual ~Imath();
//};
//
//class moremath :public Imath
//{
//public:
//	int add(int a, int b);
//	int add_more(int a, int b);
//};
//
//int moremath::add(int a, int b)
//{
//	std::cout << "I am in add" << std::endl;
//	return (a + b);
//}
//
//int moremath::add_more(int a, int b)
//{
//	std::cout << "I am in add_more"<<std::endl;
//	return (a + b+2);
//}
//
////Test driver
//void main(void)
//{
//	class Imath* p = new class moremath;	
//	p->add(1,2);
//	p->add_more(1,2);
//}