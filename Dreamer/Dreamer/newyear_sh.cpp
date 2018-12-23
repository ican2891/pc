#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#define test
#include<cstdio>
int main()
{
#ifdef test    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, k, n_solved=0, i, t_gap, t_avai, t_allProbs;
    scanf("%d%d", &n, &k);
    t_gap = 240;
    t_avai = t_gap - k;
    t_allProbs = 5 * n*(n + 1) / 2;
    for (i = 0; i<n; i++)
    {
        if (t_allProbs>t_avai)
            t_allProbs = 5 * (n - i - 1)*(n - i) / 2;
        else
        {
            n_solved = n - i;
            break;
        }
    }
    printf("%d", n_solved);
    return 0;
#ifdef test
    fclose(stdout);
    fclose(stdin);
#endif 
}
