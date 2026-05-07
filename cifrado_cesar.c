#include <stdio.h>
#include <stdlib.h>


void Limpiar(char x[10]){
    if(sizeof(x)>0 && x[-1]== '\n'){
        x[-1]='\0';
    }

}

int Cambio_letra(char x[10], int n){
    int m;
    for(int i=0;i<sizeof(x);i++){
        if(x[i]+n>122){
            m=n-(122-x[i]);
            x[i]=97+m;
        }
        else{
            x[i]=x[i]+n;
        }

    }

}
int Cambio_letra_inverso(char x[10], int n){
    int m;
    for(int i=0;i<sizeof(x);i++){
        if(x[i]-n<97){
            m=n-(97-x[i]);
            x[i]=122-m;
        }
        else{
            x[i]=x[i]-n;
        }

    }
    Imprimir(x);



}
void Imprimir(char x[10]){
    for(int i=0;i<=sizeof(x);i++){
        printf("%c",x[i]);
    }

}
int Guardar(char x[10]){
    FILE *f;
    f= fopen("encriptado.txt","a");
    fprintf(f,"palabra encriptada:\t");
    for(int i=0;i<=sizeof(x);i++){
        fprintf(f,"%c",x[i]);
    }
    fprintf(f,"\n");
    fclose(f);


}

int main()
{
    int n;
    char x[10];
    printf("escriba la palabra: ");
    fgets(x,sizeof(x),stdin);
    printf("escriba la cantidad de dezplazamientos: ");
    scanf("%d",&n);
    Limpiar(x);
    Cambio_letra(x,n);
    Imprimir(x);
    Guardar(x);
    Cambio_letra_inverso(x,n);
    return 0;
}
