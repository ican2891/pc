#include<iostream>
using namespace std;
//#define test
static uint32_t A[10000];
int main(void)
{
#ifdef test    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    uint32_t nt = 0, n = 0, u = 0;
    uint32_t l = 0, r = 0, val = 0;
    uint32_t nq=0, q=0;
    
    scanf("%d", &nt);
    while (nt--)
    {
        memset(&A[0], 0, sizeof(uint32_t));
        scanf("%d", &n);
        scanf("%d", &u);
        while (u--)
        {
            scanf("%d", &l);
            scanf("%d", &r);
            scanf("%d", &val);

            for (uint32_t i = l; i <= r; i++)
            {
                A[i]+= val;
            }
        }
        scanf("%d", &nq);

        while (nq--)
        {
            scanf("%d", &q);
            printf("%d\n", A[q]);
        }
    }

#ifdef test
    fclose(stdout);
    fclose(stdin);
#endif   
    return 0;
}