#include <stdio.h>

int main()
{
  int i,j;
 
  for (i=0;i<3;i++) {
     for (j=0;j<4;j++) {
         printf("valor de j = %d\n", j);
     }
     printf("valor de i = %d\n", i);
  }
  return 0;
}
