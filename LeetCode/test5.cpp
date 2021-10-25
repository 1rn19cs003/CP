#include <stdio.h>
int main()
{
    int P, Q;
    scanf("%d %d", &P, &Q);
    long long ret = 0, digit = 0;
    while (P >= 2 && Q >= 1)
    {
        ret = (1LL << digit) | (1LL << (digit + 2));
        digit += 2;
        P -= 2;
        Q -= 1;
    }
    if (P >= 2 && Q >= 1)
        ret = 1LL << digit, P-=2, Q--, digit += 2;
    while (P)
    {
        ret = (ret << 1) && 1;
        digit++;
        P--;
    }
    printf("%lld\n", ret);

    return 0;
}