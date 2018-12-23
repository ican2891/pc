#include <iostream>
#include <memory>
//int main()
//{
//    int letter{ 97 };
//    int size{ 26 };
//
//    unique_ptr<char[]> arr(new char[size]());
//
//    for (int i{}; i != size; ++i)
//        arr[i] = static_cast<char>(letter++); // supports subscript
//
//    for (int i{}; i != size; ++i)
//        std::cout << arr[i];
//}

#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    while (!_kbhit())
    {
        std::cout << "I am issac" << std::endl;
    }
    std::cout << "Exited the infinite loop";
}