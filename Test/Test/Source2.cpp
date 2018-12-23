//Sample code used to implement 
//Test the list with constructor callbacks

#include<iostream>
#include<list>
using namespace std;

class myclass
{
public:
	myclass(int val) { a = val; }
	~myclass() { std::cout << "I am in destructor" << std::endl; }
	void print_myclass() { std::cout << "val:" <<a<< std::endl;}
	int get_data()const { return a; }
	bool operator == (const myclass& m) const { return a == m.a;}
private:
	int a;
};

void main(void)
{
	std::list<class myclass > tlist;	
	for (int i = 0; i < 5; i++){
		myclass myclassobj(i);
		tlist.push_back(myclassobj);
	}		
	for (std::list<class myclass >::iterator it = tlist.begin(); it != tlist.end(); it++) {
		it->print_myclass();
	}
	for (std::list<class myclass >::iterator it = tlist.begin(); it != tlist.end(); ) {		
		if (it->get_data() == 2)
		{
			it = tlist.erase(it);
		}
		else
		{
			++it;
		}
	}
	for (std::list<class myclass >::iterator it = tlist.begin(); it != tlist.end(); it++) {
		it->print_myclass();
	}
	while (1) {}
}