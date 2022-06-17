#include <stdio.h>

void lista(int numero);

int main()
{
    int N;

    scanf("%d", &N);

    lista(N);

    return 0;
}

void lista(int numero)
{
    int x;

    for (x = 1; x <= numero; x++)
    {
        printf("%d %d %d\n", x, x * x, x * x * x);
        printf("%d %d %d\n", x, x * x + 1, x * x * x + 1);
    }
}
