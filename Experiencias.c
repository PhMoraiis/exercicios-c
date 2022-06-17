#include <stdio.h>
#include <math.h>

int main()
{

    int I, T, N, total, L, C = 0, R = 0, S = 0;
    char c;
    double X, Y, Z;

    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        scanf("%d %c", &L, &c);
        if (c == 'S')
            S += L;
        else if (c == 'R')
            R += L;
        else
            C += L;
    }

    total = C + S + R;
    X = (C * 100.00) / total;
    Y = (R * 100.00) / total;
    Z = (S * 100.00) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf %%\n", X);
    printf("Percentual de ratos: %.2lf %%\n", Y);
    printf("Percentual de sapos: %.2lf %%\n", Z);

    return 0;
}
