#include <stdio.h>
#include <stdlib.h>

void Rellenar(int v[][3]){
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("posicion %d %d\t:",i,j);
        scanf("%d",&v[i][j]);
    }
 }
    Mostrar(v);

}

void Mostrar(int v[3][3]){
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",v[i][j]);
    }
    printf("\n");
 }

}


int Diagonal(int v[3][3]){
 int c;

 c = v[0][0]+v[1][1]+v[2][2];
 printf("la diagonal es %d",c);
}

int main()
{
    int v[3][3];
    Rellenar(v);

    Diagonal(v);
    return 0;
}
