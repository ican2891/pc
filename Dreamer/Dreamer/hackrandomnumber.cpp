//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#define test
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//static int findInterval(std::vector<int> &v, int d)
//{
//    int count = 0;
//    for (auto const& i :v)
//    {
//        for (auto const& j : v)
//        {
//            if (i + d == j)
//            {
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//int main(void)
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    int n = 0;
//    int d = 0;    
//    int input = 0;
//    std::vector<int> v;    
//
//    scanf("%d %d", &n, &d);
//
//    while (n--)
//    {
//        scanf("%d", &input);
//        v.push_back(input);        
//    }
//    std::sort(v.begin(), v.end());
//    printf("%d", findInterval(v, d));
//
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif   
//    return 0;
//}