#include <stdio.h>

int main() {
    float cantidad_1, cantidad_2;
    float resultado_suma, resultado_resta, resultado_multiplicacion, resultado_division;

    printf("Introduce el primer número: ");
    scanf("%f", &cantidad_1);
    printf("Introduce el segundo número: ");
    scanf("%f", &cantidad_2);

    resultado_suma = cantidad_1 + cantidad_2;
    resultado_resta = cantidad_1 - cantidad_2;
    resultado_multiplicacion = cantidad_1 * cantidad_2;
    if (cantidad_2 != 0) {
        resultado_division = cantidad_1 / cantidad_2;
        printf("Resultado de la suma: %.2f\n", resultado_suma);
        printf("Resultado de la resta: %.2f\n", resultado_resta);
        printf("Resultado de la multiplicación: %.2f\n", resultado_multiplicacion);
        printf("Resultado de la división: %.2f\n", resultado_division);
    } else {
        printf("Error: División por cero no es permitida.\n");
    }

    return 0;
}
