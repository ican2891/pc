#include<iostream>
#include<memory>
//Trying of the stack overflow error
class A {
public:
    int a;
    int helloa() { std::cout << "Hello A" << std::endl; }
};

class B : public A {
public:
    int b;
    int hellob() { std::cout << "Hello B" << std::endl;}
};

//Allocate an instance of B.We can interface with that as either an A* or a B*.
//Allocate an instance of A.If we were to cast it to a B*, should there be space allocated for the member b ?
//A very innocent but powerful message.

void main()
{
    class B b;
    //class A *pa = &b;    
    class A *pa = new B;
    pa->helloa();
}


//Unable to call derived class function using base class pointers
//----------------------------------------------------------------
//
//You can't call a member that appears only in a derived class through a pointer 
//to the base class; you have to cast it(probably using dynamic_cast) to a pointer
//to the derived type, first -- otherwise the compiler has no idea the method even
//exists.
//
//It might look something like this:
//
//void someMethod(Base* bp) {
//    Derived *dp = dynamic_cast<Derived*>(bp);
//    if (dp != null)
//        dp->methodInDerivedClass();
//}

//Dyanmic type casting provide a way to work.

