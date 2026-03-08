#include <stdio.h>
#include <stdlib.h>

void Tablas(int arreglo[][3]){
     for(int n=0;n<3;n++){
        for(int i=0;i<3;i++){
            printf("%d\t",arreglo[i][n]);
        }
        printf("\n");
    }

}

int main()
{
    int cor_1, cor_2,cont_1=3,cont_2=3;
    int tablero_p1[3][3];
    int tablero_p2[3][3];
    int barco_1=555;
    int barco_2[2]={777,777};

    for(int n=0;n<3;n++){
        for(int i=0;i<3;i++){
            tablero_p1[i][n]=0;
        }
    }
    for(int n=0;n<3;n++){
        for(int i=0;i<3;i++){
            tablero_p2[i][n]=0;
        }
    }

    printf("jugador 1 seleccione la primera cordenada de su barco 1: ");
    scanf("%d",&cor_1);
    printf("jugador 1 seleccione la segunda cordenada de su barco 1: ");
    scanf("%d",&cor_2);
    tablero_p1[cor_1][cor_2]=barco_1;
    Tablas(tablero_p1);

    printf("jugador 2 seleccione la primera cordenada de su barco 1: ");
    scanf("%d",&cor_1);
    printf("jugador 2 seleccione la segunda cordenada de su barco 1: ");
    scanf("%d",&cor_2);
    tablero_p2[cor_1][cor_2]=barco_1;
    Tablas(tablero_p2);

    printf("jugador 1 seleccione la primera cordenada x del segundo barco: ");
    scanf("%d",&cor_1);
    printf("jugador 1 seleccione la primera cordenada y del segundo barco: ");
    scanf("%d",&cor_2);
    tablero_p1[cor_1][cor_2]=barco_2[0];
    printf("jugador 1 seleccione la segunda cordenada x del segundo barco: ");
    scanf("%d",&cor_1);
    printf("jugador 1 seleccione la segunda cordenada y del segundo barco: ");
    scanf("%d",&cor_2);
    tablero_p1[cor_1][cor_2]=barco_2[1];
    Tablas(tablero_p1);

    printf("jugador 2 seleccione la primera cordenada x del segundo barco: ");
    scanf("%d",&cor_1);
    printf("jugador 2 seleccione la primera cordenada y del segundo barco: ");
    scanf("%d",&cor_2);
    tablero_p2[cor_1][cor_2]=barco_2[0];
    printf("jugador 2 seleccione la segunda cordenada x del segundo barco: ");
    scanf("%d",&cor_1);
    printf("jugador 2 seleccione la segunda cordenada y del segundo barco: ");
    scanf("%d",&cor_2);
    tablero_p2[cor_1][cor_2]=barco_2[1];
    Tablas(tablero_p2);

    while(cont_1>=0||cont_2>=0){
        printf("jugador 1 seleccione las cordenadas que queire atacar\n");
        printf("cordenada x:");
        scanf("%d",&cor_1);
        printf("cordenada y: ");
        scanf("%d",&cor_2);
        if(tablero_p2[cor_1][cor_2]==555 || tablero_p2[cor_1][cor_2]==777){
            cont_2=cont_2-1;
            tablero_p2[cor_1][cor_2]=1;
            printf("le diste a un barco");
        }
        Tablas(tablero_p2);
        printf("jugador 2 seleccione las cordenadas que queire atacar\n");
        printf("cordenada x: ");
        scanf("%d",&cor_1);
        printf("cordenada y: ");
        scanf("%d",&cor_2);
        if(tablero_p1[cor_1][cor_2]==555 || tablero_p1[cor_1][cor_2]==777){
            cont_1=cont_1-1;
            tablero_p1[cor_1][cor_2]=1;
            printf("le diste a un barco");
        }
        Tablas(tablero_p1);

    }


    return 0;
}
