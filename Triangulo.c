#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, area, soma;

    scanf("%f %f %f", &a, &b, &c);

    if (fabsf(a - b) < c &&
        fabsf(b - c) < a && fabsf(a - c) < b && (a + b) > c && (b + c) > a && (a + c) > b)
    {
        soma = a + b + c;
        printf("Perimetro = %.1f\n", soma);
    }
    else
    {
        area = (a + b) * c / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
// | b - c | < a < b + c
// | a - c | < b < a + c
// | a - b | < c < a + b
