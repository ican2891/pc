////BSEARCH2
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#define test
//#include<iostream>
//using namespace std;
//int32_t A[100000];
//
//static int32_t binarySearch(int32_t input,int32_t size)
//{   
//    int lo = 0;
//    int mid = 0;
//    int hi = size;     
//    bool isFound = false;
//    while (lo < hi)
//    {        
//        mid = ((lo + hi) / 2);
//        printf("lo:%d,hi:%d:mid:%d \n", lo, hi, mid);
//        
//        if (A[mid] == input)
//        {
//            isFound = true;
//            break;
//        }        
//        else if (A[mid] > input)
//        {
//            hi = mid ;           
//        }        
//        else
//        {
//            lo = mid+1;
//        }
//    }
//    if (isFound)
//    {
//        while (mid > 0)
//        {            
//            mid--;
//            if (A[mid] == input)
//            {
//                continue;
//            }
//            else
//            {
//                mid++;
//                break;
//            }
//        }
//        return mid;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//int main()
//{
//#ifdef test
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    int N, Q, input, i = 0;
//    scanf("%d %d", &N, &Q);
//    while (i<N)
//    {
//        scanf("%d", &A[i++]);
//    }
//    while (Q--)
//    {
//        scanf("%d", &input);
//        printf("%d\n", binarySearch(input,N-1));
//    }
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif
//    return 0;
//}