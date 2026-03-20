#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombres[4][15];
    char caracteres[5];
    for(int i=0;i<=3;i++){
        printf("escribe tu nombre: ");
        fgets(nombres[i],sizeof(nombres),stdin);
    }
    for(int i=0;i<=3;i++){
        printf("%s",nombres[i]);
    }

    printf("\n%s\n",nombres);
    for(int i=0;i<=3;i++){
        printf("%d\n",&nombres[i]);
    }

    printf("1 %d\n",&caracteres);
    for(int i=0;i<=3;i++){
        for(int j=0;j<=15;j++){
                printf("%d  :%c\n",&nombres[i][j],nombres[i][j]);
        }

    }



    return 0;
}
