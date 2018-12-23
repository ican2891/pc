////Sample code used to implement 
////(Two inteface  for single implementation). And we could typecast the  
////implemention and decide which interface we are using on runntime.
////Deletion of one pointer will make the other pointer dagling.
////That is the catch in the entire think
//#include<iostream>
//using namespace std;
//class Interface1
//{
//public:
//	virtual  void print_interface1(void) = 0;
//};
//class Interface2
//{
//public:
//	virtual void print_interface2(void) = 0;
//};
//class implementation :public Interface1, public Interface2
//{
//public:
//	void print_interface1(void)
//	{
//		std::cout << "I1" << std::endl;
//	}	
//	void print_interface2(void)
//	{
//		std::cout << "I2" << std::endl;
//	}
//};
//void main(void)
//{
//	class Interface1 *iptr1 = new class implementation;
//	iptr1->print_interface1();	
//	class Interface2 *iptr2 = dynamic_cast<class Interface2*>(iptr1);
//	iptr2->print_interface2();
//}