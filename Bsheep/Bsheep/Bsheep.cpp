#include <iostream>
#include <vector>
using namespace std;
#define test

int main()
{
#ifdef test    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    uint32_t t,n,x1, y1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> x1;
            cin >> y1;
        }
    } 
#ifdef test
    fclose(stdout);
    fclose(stdin);
#endif  
    return 0;
}