//#include <iostream>
//#include <string>
//#include <algorithm>    // std::min
//using namespace std;
//int i = 0;
//int LCSLength(string X, string Y, int m, int n)
//{
//    cout << "iteration" << i << " x:" << X << " y:" << Y << std::endl;
//    // return if we have reached the end of either sequence
//    if (m == 0 || n == 0)
//        return 0;
//    i++;
//    // if last character of X and Y matches
//    if (X[m - 1] == Y[n - 1])
//        return LCSLength(X, Y, m - 1, n - 1) + 1;
//
//    // else if last character of X and Y don't match
//    return max(LCSLength(X, Y, m, n - 1), LCSLength(X, Y, m - 1, n));
//}
//
////Longest common subsequence
//int main()
//{
//    //string  X = "ABCBDAB";
//    string  X = "ABC";
//    string  Y = "BDCABA";
//    int     greatest_val = 0u;
//
//    int n = X.length();
//    for (int i = 0; i <n; i++)
//    {
//        for (int j = i; j<n; j++)
//        {
//            for (int k = i; k <= j; k++)
//            {
//                cout << X[k] << " ";
//            }
//            cout << endl;
//        }
//    }    
//
//    while (1);
//    return 0;
//}