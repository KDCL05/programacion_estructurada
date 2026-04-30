#include <stdio.h>
#include <stdlib.h>


/*generar un numero random*/
int Random(int *array,int n){
	int i,y;
	for(i=0;i<n;i++){
		y=n/2+i;
		array[i]=y;
	}
	
}

/*determinar los espacios libres que hay en el array*/
int Espacios_libres(int *array,int n){
	int i,espacio_libre=0;
	for(i=0;i<n;i++){
		if(array[i]==-999){
			espacio_libre++;
		}
	}
	return espacio_libre;
	
}

/*imprimir el array */
void Imprimir(int *array,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%i,",array[i]);
	}
}

/*hacer un pop en el array*/
void Pop_numero(int *array,int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(array[i]==x){
			for(;i<n;i++){
				array[i]=array[i+1];
			}
			if(array[n-1]!=-999){
				array[n-1]=-999;
			}
		}
		else if(i==n-1){
			printf("el numero no esta en el arreglo");
		}
	}
	
}

/*total de espacios ocupados en el array*/
int Total(int *array,int n,int cont2){
	int i,x=0;
	for(i=0;i<n;i++){
		if(cont2==0){
			return n;
		}
		else if(array[i]!=-999){
			x++;
		}
	}
	return x;
	
}

int main(int argc, char *argv[]) {
	int n,i=0,opc,y,num_busq,cont=0,espacios_libres=0,x,cont2=0,total=0,j;
	printf("de cauntos espacios es el arreglo: ");
	scanf("%i",&n);
	int *array=(int*)malloc(n*sizeof(int));
	while(cont<4){
		j=n;
	printf("digite una opcion \nopcion 1: rellenar automaticamente \nopcion 2: rellenar manualmnete: \nopcion 3: buscar un numero: \nopcion 4: mostrar el arreglo: \nopcion 5: hacer pop: \nopcion 6: tolta de valores en el arreglo: \nopcion 7: salir:\n: ");
	scanf("%i",&opc);
	switch(opc){
		case 1:
			espacios_libres=Espacios_libres(array,n);
			if(cont2==0||espacios_libres>0){
				Random(array,n);
			}
			else{
				printf("el arreglo esta lleno\n");
			}
			cont2=cont2+1;
			break;
		case 2:
			espacios_libres=Espacios_libres(array,n);
			if(cont2==0||espacios_libres>0){
				if(espacios_libres>0){
					while(espacios_libres>0){
					printf("digite el numero para el espacio %i del arreglo: ",j);
					scanf("%i",&y);
					array[j]=y;	
					espacios_libres--;
					j=j-1;
					}
				}
				else{
				
					for(i=0;i<n;i++){
						printf("digite el numero para el espacio %i del arreglo: ",i);
						scanf("%i",&y);
						array[i]=y;
					}
				}
			}
			else{
				printf("el arreglo esta lleno\n");
			}
			cont2=cont2+1;
			break;
		case 3:
			printf("digite el numero que desea buscar: ");
			scanf("%i",&num_busq);
			for(i=0;i<=n;i++){
				if(num_busq==array[i]){
					printf("el numero %i esta en la posision %i\n",num_busq,i);
					break;
				}
				else if(i>=n){
					printf("el numero buscado no esta el arreglo\n");
				}
			}
			break;
		case 4:
			Imprimir(array,n);
			printf("\n");
			break;
		case 5:
			printf("digite el numero que desea sacar del arreglo: ");
			scanf("%i",&x);
			Pop_numero(array,n,x);
			break;
		case 6:
			total=Total(array,n,cont2);
			printf("%i\n",total);
			break;
		case 7:
			cont=4;
	}
}
	
	
	
	
	return 0;
}
