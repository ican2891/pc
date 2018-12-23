//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#define test
//#include<cstdio>
//int main()
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    int c=0,n,k,maxtime, acquiredtime =0;
//    scanf("%d%d", &n, &k);
//    maxtime = 240 - k;
//
//    for (int i = 1; i<=n; i++)
//    {        
//        acquiredtime = (acquiredtime + (5 * i));
//        if (acquiredtime > maxtime)
//        {
//            break;
//        }
//        else
//        {
//            c++;
//        }
//    }
//    printf("%d", c);
//    return 0;
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif 
//}
//
