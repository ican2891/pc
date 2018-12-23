////#ifdef _MSC_VER
////#define _CRT_SECURE_NO_WARNINGS
////#endif
////#define test
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int main()
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    int l;
//    int n, a[1010];
//    scanf("%d", &n);
//    scanf("%d", &l);
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    sort(a, a + n);
//    double ans= max(a[0], l - a[n-1]);
//    double currentmax = 0.0;
//
//    for (int i = 0; i < n-1; i++)
//    {          
//        currentmax = 0.5*(a[i + 1] - a[i]);        
//        if (currentmax > ans)
//        {
//            ans = currentmax;
//        }
//    }       
//    printf("%.17lf\n", ans);
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif 
//    return 0;
//}