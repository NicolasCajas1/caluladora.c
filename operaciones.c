int sumar(int sumando1, int sumando2) {
    int suma;
    suma = sumando1 + sumando2;
    return suma;
}

int restar(int restando1, int restando2) {
    int resta;
    resta = restando1 - restando2;
    return resta;
}

int multiplicar(int multiplicando1, int multiplicando2) {
    int multiplicacion;
    multiplicacion = multiplicando1 * multiplicando2;
    return multiplicacion;
}

float dividir(int dividendo, int divisor) {
    float division;
    if (divisor == 0) {
        printf("No se puede dividir entre cero\n");
    } else {
        division = dividendo / divisor;
    return division;
    }
}