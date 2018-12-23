#include <memory> //for unique pointers
#include <iostream>
#include <cassert>
#include<stack>
#include<string>
using namespace std;

class state
{
    std::string m_seperator;    
public:
    state(std::string seperator) : m_seperator(seperator) { std::cout << "construcutor" << std::endl; }
    ~state() { std::cout << "Destrucutor" << std::endl; }
    std::string get_seperator() { return m_seperator; }
};

int main()
{ 
    std::stack<std::unique_ptr<class state>> s;    
    for (auto i = 0; i < 3; i++)
    {
        std::unique_ptr<class state> ptr(new state(std::to_string(i)));
        s.push(std::move(ptr));
    }

    while (!s.empty())
    {
        std::cout << s.top()->get_seperator();
        s.pop();
    }

    if (!s.empty()) std::cout << "Error in the code" << std::endl;
    else std::cout << "Error in the code" << std::endl;   
}