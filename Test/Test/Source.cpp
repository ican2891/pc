//#include <iostream>
//using namespace std;
//
//class IAbstract
//{
//public:
//	virtual void print_abstract (void) = 0;
//	virtual ~IAbstract() {};
//};
//class base
//{
//public:
//	virtual void print_base(void);	
//};
//void base::print_base(void)
//{
//	std::cout << "I am in base" << std::endl;	
//}
//
//class derived :public IAbstract,public base
//{
//public:
//	virtual void print_abstract(void)override;
//};
//
//void derived::print_abstract(void)
//{
//	std::cout << "I am in abstract" << std::endl;
//}
//
////These experiments are supposed to be put in to the ever note information
//void main(void)
//{
//	//Interface pointer to the derived class
//	//class IAbstract* p = new class derived;
//	//p->print_abstract();
//	//p->print_base(); //The visiblit for the other base class was not available
//	//delete p;
//
//	//Pointer to the derived class and everything is visible
//	//class derived *p = new class derived;
//	//p->print_abstract();
//	//p->print_base(); //The visiblit for the other base class was not available
//	//delete p;
//
//	//Pointer to the BASE class and only the base class methods are visible
//	//class base *p = new class derived;
//	//p->print_abstract();
//	//p->print_base(); //The visiblit for the other base class was not available
//	//delete p;
//
//}
//
//
