#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    long long N, S1, V1, S2, V2;
    scanf("%ld %ld %ld %ld %ld", &N, &S1, &V1, &S2, &V2);
    long long ret = 0;
    if (S1 > S2)
    {
        swap(S1, S2);
        swap(V1, V2);

    }
    if (S2 > sqrt(N))
    {
        for (int i = 0; i * S2 <= N; i++)
        {
            // ret = insert code here;
            ret=ret+i;
        }
    }
    else
    {
        if (S2 > S1)
        {
            swap(S1, S2);
            swap(V1, V2);

        }
        for (int i = 0; i <= S2 && N - S1 * i >= 0; i++)
        {
            // ret = insert code here;
            ret=ret+i;
        }

    }
    printf("%ld\n", ret);
    return 0;
}