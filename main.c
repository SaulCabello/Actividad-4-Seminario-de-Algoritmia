#include <stdio.h>

int main() {
    char op;
    
    do
    {
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agrega personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        default:
        	printf("opcion fuera de rango\n");
			break;
        }

        fflush(stdin);
    } while (op != '0');
    
    return 0;
}
