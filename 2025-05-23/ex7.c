#include <stdio.h>

float media_nums(float num1, float num2, float num3)
{
  float media_local;

  media_local = (num1 + num2 + num3)/3;
  return media_local;
}

int main()
{
  float media, aux1, aux2, aux3;

  printf("\nEntre com numero 1: ");  
  scanf ("%f",&aux1);

  printf("\nEntre com numero 2: ");  
  scanf ("%f",&aux2);

  printf("\nEntre com numero 3: ");  
  scanf ("%f",&aux3);

  media = media_nums(aux1, aux2, aux3);
  printf ("\nmedia dos 3 numeros é %.2f\n", media);
  return 0;
}