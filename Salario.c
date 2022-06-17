#include <stdio.h>

int main()
{
  // Variaveis
  int numero, horas;
  float valor_hora, salary_soma;

  // Leitura de dados
  scanf("%d", &numero);
  scanf("%d", &horas);
  scanf("%f", &valor_hora);

  salary_soma = valor_hora * horas;

  // Saida de dados
  printf("NUMBER = %d\n", numero);
  printf("SALARY = U$ %0.2f\n", salary_soma);

  return 0;
}
