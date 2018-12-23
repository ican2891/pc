////BSEARCH1
////#ifdef _MSC_VER
////#define _CRT_SECURE_NO_WARNINGS
////#endif
////#define test
//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//uint32_t A[100000];
//
//int main()
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//    int N,Q,input,i=0;
//    std::map<int,int> m;
//    scanf("%d %d", &N, &Q);
//    while (N--)
//    {       
//        scanf("%d", &input);
//        m[i++] = input;
//    }
//    while (Q--)
//    {
//        scanf("%d", &input); 
//        auto result = std::find_if(m.begin(), m.end(),[input](const auto& mo) {return mo.second == input; });        
//        if (result != m.end())
//        {
//            printf("%d \n", result->first);
//        }
//        else
//        {
//            printf("%d \n", (-1));
//        }            
//    }
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif        
//    return 0;
//}
//
////It failed due to time exceeding limit