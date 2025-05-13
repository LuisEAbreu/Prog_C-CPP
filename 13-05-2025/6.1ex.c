#include <stdio.h>

int main()
{
  int i, N;

  printf("Entre com o número\n");
  scanf ("%d", &N);

  for ( i=1; i<=N; i=i+1) {
     if (i%2==0)
       printf("número par ====> %d\n", i);
  }
  printf("FIM\n");

  return 0;
}