#include <stdio.h>
#include <stdlib.h>

int main()
{

   int X, Y;

   do
   {
      scanf("%d %d", &X, &Y);

      if (X != 0 && Y != 0)
      {
         if (X > 0 && Y > 0)
            printf("primeiro\n");
         else if (X < 0 && Y > 0)
            printf("segundo\n");
         else if (X < 0 && Y < 0)
            printf("terceiro\n");
         else
            printf("quarto\n");
      }
   } while (X != 0 && Y != 0);

   return 0;
}
