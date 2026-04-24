#include <stdio.h>
#include <stdlib.h>

void Rellenar(int v[][3]){
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("posicion %d %d\t: ",i,j);
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


int Diagonal(int v[3][3],int c){

 c = v[0][0]+v[1][1]+v[2][2];
 return c;
}
int Guardar(int v[][3],int c){
  FILE *f;
  f= fopen("tablero.txt","a");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        fprintf(f,"%d ",v[i][j]);
    }
    fprintf(f,"\n");
 }
 fprintf(f,"la suma de la diagonal es : %d",c);
 fprintf(f,"\n");
 fclose(f);

 return 1;

}

int main()
{   int c;
    int v[3][3];

    Rellenar(v);

    c=Diagonal(v,&c);
    printf("%d",Guardar(v,c));

    return 0;
}
