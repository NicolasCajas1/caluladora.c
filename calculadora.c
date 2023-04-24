#include <stdio.h>
int resultado;

int main() {
    int opcion, num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Seleccione una opcion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            resultado=sumar(num1, num2);
            break;
        case 2:
            resultado=restar(num1, num2);
            break;
        case 3:
            resultado=multiplicar(num1, num2);
            break;
        case 4:
            resultado=dividir(num1, num2);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}