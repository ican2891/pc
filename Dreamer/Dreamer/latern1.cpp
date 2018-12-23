//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#define test
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int l, n;
//int a[1010];
//bool check(double d)
//{
//    double dist = 0;
//    for (int i = 0; i < n && dist < l; i++)
//    {
//        if (a[i] - d <= dist)
//        {
//            dist = a[i] + d;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    if (dist < l)
//    {
//        return false;
//    }
//    return true;
//}
//int main()
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    scanf("%d%d", &n, &l);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    sort(a, a + n);
//    double left = 0, right = l;
//    for (int k = 0; k < 100000; k++)
//    {
//        if (check((left + right) / 2))
//            right = (left + right) / 2;
//        else
//            left = (left + right) / 2;
//    }
//    printf("%.12f\n", (left + right) / 2);
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif 
//
//}


//using namespace std;
//
//int a[1234567];
//
//int main() {
//    int n, len;
//    scanf("%d %d", &n, &len);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", a + i);
//    }
//    sort(a, a + n);
//    double ans = max(a[0], len - a[n - 1]);
//    for (int i = 0; i < n - 1; i++) {
//        double cur = 0.5 * (a[i + 1] - a[i]);
//        if (cur > ans) {
//            ans = cur;
//        }
//    }
//    printf("%.17lf\n", ans);
//    return 0;
//}