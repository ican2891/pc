//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#define test
//#include<iostream>
//#include<map>
//using namespace std;
//map<int, int> mp;
//int n, k, arr[1000100];
//int main()
//{
//#ifdef test    
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif
//
//    int ans = 0;
//    cin >> n >> k;
//    for (int i = 0; i<n; i++)
//    {
//        cin >> arr[i];
//        mp[arr[i]]++;
//    }
//    for (int i = 0; i<n; i++)
//    {
//        ans += mp[arr[i] + k];
//    }
//    cout << ans << endl;
//#ifdef test
//    fclose(stdout);
//    fclose(stdin);
//#endif    return 0;
//}