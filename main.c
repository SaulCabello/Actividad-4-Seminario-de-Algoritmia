#include <stdio.h>
#include "personaje.h"

void capturar_enteros() {
    int enteros[5];
    int i;
    float promedio;
    int suma = 0;
    
	printf("ingrese los 5 numeros:\n");
	
    for (i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    system("cls");
    for (i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);    
}

void mostrar(int n, char cadena[]) {
    int i;
	for (i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}

int main() {
    char op;
    char cadena[20];
    int n;
    
    do
    {
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agrega personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        fflush(stdin);
		scanf("%c", &op);

        switch (op)
        {
        case '1':
        	capturar_enteros();
            break;
        case '2':
        	printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("Cuantas veces quieres que se imprima?: ");
            scanf("%i", &n);
            mostrar(n, cadena);
            break;
        case '3':
        	capturar_personajes();
            break;
        case '4':
            break;
        default:
			break;
        }

        fflush(stdin);
    } while (op != '0');
    
    return 0;
}
