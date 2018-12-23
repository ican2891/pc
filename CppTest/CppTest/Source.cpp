#include<iostream>
#include<memory>
using namespace std;
class s
{
    int a;
public:
    s() { std::cout << "constructor" << std::endl;}
    ~s() { std::cout<<"destructor" << std::endl;}
    std::shared_ptr<class s> dangerous()
    {
        return shared_ptr<class s> (this);
    }
    void printme()
    {
        std::cout << "print my class"<<std::endl;
    }
};

class ss: :: enable_shared_from_this<ss>
{
    int a;
public:
    ss() { std::cout << "constructor" << std::endl; }
    ~ss() { std::cout << "destructor" << std::endl; }
    std::shared_ptr<class ss> dangerous()
    {
        return shared_from_this();
    }
    void printme()
    {
        std::cout << "print my class" << std::endl;
    }
};



void Test_pad()
{
    class s *p = new s;
    std::shared_ptr<class s> sp1(p);
    std::shared_ptr<class s> sp2(p);
    std::cout << "use_count_sp1:" << sp1.use_count() << std::endl;
    std::cout << "use_count_sp2:" << sp2.use_count() << std::endl;
}

void Test_pad1()
{    
    std::shared_ptr<class s> sp1(new s);
    std::shared_ptr<class s> sp2 = sp1->dangerous();
    std::cout << "use_count_sp1:" << sp1.use_count() << std::endl;
    std::cout << "use_count_sp2:" << sp2.use_count() << std::endl;
}

void Test_pad2()
{
    std::shared_ptr<class ss> sp1(new ss);
    std::shared_ptr<class ss> sp2 = sp1->dangerous();
    std::cout << "use_count_sp1:" << sp1.use_count() << std::endl;
    std::cout << "use_count_sp2:" << sp2.use_count() << std::endl;
}

int main()
{
    std::cout << "Testing the shared pointer" << std::endl;
    //Test_pad();
    //Test_pad1();
    Test_pad2();
    return 0;
}