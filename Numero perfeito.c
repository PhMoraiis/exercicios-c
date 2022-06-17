#include <stdio.h>
#include <stdlib.h>

int teste(int n)
{
    int contador, soma = 0;

    for (contador = 1; contador < n; contador++)
    {
        if (n % contador == 0)
        {
            soma = soma + contador;
        }
    }

    if (soma == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()

{
    int n, i, numero, contador, resultado, soma;
    scanf("%d", &numero);
    soma = 0;

    for (i = 1; i <= numero; i++)
    {
        scanf("%d", &n);
        resultado = teste(n);
        if (resultado == 1)
            printf("%d eh perfeito\n", n);
        else
        {
            printf("%d nao eh perfeito\n", n);
        }
    }
}