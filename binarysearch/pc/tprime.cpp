#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#define test
#include <iostream>
#include <chrono>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifdef test    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    auto start = std::chrono::system_clock::now();
#endif
    uint32_t n;
    uint64_t input;    
    std::cin >> n;
    while (n--)
    {
        std::cin >> input;
        std::cout << input;
    }
#ifdef test
    auto end = std::chrono::system_clock::now();
    cout<<std::endl << "Elapsed time in nanoseconds:"<< chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns" << std::endl;
    cout<< "Elapsed time in microseconds : " << chrono::duration_cast<chrono::microseconds>(end - start).count() << " µs" << std::endl;
    cout<< "Elapsed time in milliseconds : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << std::endl;
    cout<< "Elapsed time in seconds : " << chrono::duration_cast<chrono::seconds>(end - start).count() << " sec";
    fclose(stdout);
    fclose(stdin);
#endif       
    return 0;
}