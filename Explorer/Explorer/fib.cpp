#include<iostream>

using namespace std;

int fibonacci(int n)
{
    if ((n == 1) || (n == 0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n=5, i = 0;
    cout << "Input the number of terms for Fibonacci Series:";
    //cin >> n;
    cout << "\nFibonacci Series is as follows\n";

    while (i<n)
    {
        cout << " " << fibonacci(i);
        i++;
    }
    while (1);
    return 0;
}
////Fibonacci Series using Recursion
//#include<stdio.h>
//#include<time.h>
//#include<iostream>
//int fibonacci(int n)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//    else if (n == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }   
//}
//
//int main()
//{
//    int n = 5 ;
//    //cin >> n;
//
//    if (n < 0)
//    {
//        return -1; // This means there was an error
//    }
//
//    //for (int i = 1; i < n; ++i)
//    {
//        std::cout << fibonacci(n) << " ";
//    }
//
//    return 0;
//}
//
////int fib(int n)
////{
////    if (n <= 1)
////        return n;
////    return fib(n - 1) + fib(n - 2);
////}
////
////int main()
////{
////    int n = 5;
////
////    clock_t begin, end;
////
////    double time_spent;
////
////    begin = clock();
////
////    printf("%d\n", fib(n));
////
////    end = clock();
////
////    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
////
////    printf("\nTime Taken %lf ", time_spent);
////
////    getchar();
////    return 0;
////}
