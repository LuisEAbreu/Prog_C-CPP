#include <stdio.h>
 
int main(){

    int p1,p2,p3,i,j;
    char c1, c2, c3;

    printf("Carcater a ser desenhado na primeira parte da linha\n");
    scanf("%c", &c1);
    printf("Quantidade de caracteres a ser desenhado na primeira parte da linha\n");
    scanf("%d", &p1);

    printf("Carcater a ser desenhado na segunda parte da linha\n");
    scanf(" %c", &c2);
    printf("Quantidade de caracteres a ser desenhado na segunda parte da linha\n");
    scanf("%d", &p2);

    printf("Carcater a ser desenhado na terceira parte da linha\n");
    scanf(" %c", &c3);
    printf("Quantidade de caracteres a ser desenhado na terceira parte da linha\n");
    scanf("%d", &p3);
    
    j=0;
    while(j<10){
        i=0;
        while (i < p1) {
            printf("%c", c1);
            i=i+1;
        }

        i=0;
        while (i < p2) {
            printf("%c", c2);
            i=i+1;
        }

        i=0;
        while (i < p3) {
            printf("%c", c3);
            i=i+1;
        }
        printf("\n");
        j=j+1;
    }
    return 0;
}