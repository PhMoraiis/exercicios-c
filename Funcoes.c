#include <stdio.h>
#include <math.h>

// Função do Rafael
int rafael(int x, int y)
{
    return pow(3 * x, 2) + pow(y, 2);
}
// Função do Beto
int beto(int x, int y)
{
    return 2 * pow(x, 2) + pow(5 * y, 2);
}
// Função do Carlos
int carlos(int x, int y)
{
    return -100 * x + pow(y, 3);
}

int main()
{
    int i, n, x, y, r, b, c;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d"
              "%d",
              &x, &y);
        r = rafael(x, y);
        b = beto(x, y);
        c = carlos(x, y);
        if (r > b && r > c)
        {
            printf("Rafael ganhou\n");
        }
        if (b > r && b > c)
        {
            printf("Beto ganhou\n");
        }
        if (c > r && c > b)
        {
            printf("Carlos ganhou\n");
        }
    }
}
