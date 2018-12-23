////Agressive cow.
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
////#define test
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int nBarn = 100000;
//
//static bool countCowPlacement(std::vector<int> & v, int cows,int spacing)
//{       
//    int last     = v[0];
//    int ncows    = 1;
//
//    for (int i = 1; i < v.size(); i++)
//    {
//        if (v[i] - last >= spacing)
//        {
//            ncows++;
//            last = v[i];
//            if (cows == ncows)
//            {
//                return true;
//            }          
//        }
//    }
//    return false;
//}
//
//static int functionBasedBinarySearch(std::vector<int> & v, int cows)
//{
//    int l = 1; 
//    int r = nBarn;
//
//    while (l < r)
//    {
//        int m = (l + r) / 2;
//
//        if (countCowPlacement(v, cows, m))
//        {
//            l = m +1;
//        }
//        else
//        {
//            r = m ;
//        }
//    }
//    return l-1;
//}
//
//int main()
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    int t, n, c,input;
//    std::vector<int> v;
//
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d %d", &n,&c);
//        while (n--)
//        {
//            scanf("%d",&input);
//            v.push_back(input);
//        }
//        sort(v.begin(), v.end());
//        printf("%d", functionBasedBinarySearch(v, c));
//        v.clear();
//    }
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif    return 0;
//}