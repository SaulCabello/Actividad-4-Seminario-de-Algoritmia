#include <stdio.h>

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

int main() {
    char op;
    
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
            break;
        case '3':
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
