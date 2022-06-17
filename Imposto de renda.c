#include <stdio.h>

int main()
{
    float valor;

    scanf("%f", &valor);

    if (valor >= 0 && valor <= 2000)
    {
        printf("Isento\n");
    }
    else
    {
        if (valor >= 2000.01 && valor <= 3000)
        {
            valor -= 2000;
            valor *= 0.08;
        }
        else
        {
            if (valor >= 3000.01 && valor <= 4500)
            {
                valor -= 3000;
                valor *= 0.18;
                valor += 80;
            }
            else
            {
                if (valor > 4500)
                {
                    valor -= 4500;
                    valor *= 0.28;
                    valor += 270 + 80;
                }
            }
        }
        printf("R$ %.2f\n", valor);
    }

    return 0;
}
