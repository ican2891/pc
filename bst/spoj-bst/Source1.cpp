#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#define test
#include<iostream>
#include<algorithm>


#define fl(i,n)    for(int i = 0; i < n; i++)

#define ll   long long
#define nl   endl
#define pb   push_back
#define mp   make_pair
#define fi   first
#define se   second
#define PII  pair<int,int>

#define EPs  1e-9
#define INF  1e16

#define setBit(i,n)     (i|1<<n)
#define clearBit(i,n)   (i&(~(1<<n)))
#define toggleBit(i,n)  (i^1<<n)
#define isOn(i,n)       ((i&1<<n) != 0)
using namespace std;
ll n, c;
ll a[1000000];


bool check(ll x) 
{
    ll cows = 0, last = a[0];
    cows++;
    for (int i = 1; i < n; i++) 
    {
        if (a[i] - last >= x) 
        {
            cows++;
            if (cows == c) return true;
            last = a[i];
        }
    }
    return false;
}


ll binsearch() 
{
    ll low = 0, high = INF, mid;
    while (low + 1 < high) 
    {
         mid = (low + high) >> 1;
         cout <<"low:"<<low<<"\t"<<"Mid:"<<mid<< "\t" <<"high:"<<high<< "\t" <<"\n";

        if (check(mid)) 
        {
            low = mid;
        }
        else
        {
            high = mid;
        }            
    }
    return low;
}



int main()
{
#ifdef test    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) 
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        cout << binsearch() << nl;
    }
#ifdef test
    fclose(stdout);
    fclose(stdin);
#endif   
    return 0;
}
