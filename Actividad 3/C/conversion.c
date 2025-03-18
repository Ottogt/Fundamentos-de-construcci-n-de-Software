#include <stdio.h>

void convertirQuetzales();
void convertirDolares();
void convertirEuros();
void mostrarMenu();

int main() {
    int opcion;
    
    do {
        mostrarMenu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                convertirQuetzales();
                break;
            case 2:
                convertirDolares();
                break;
            case 3:
                convertirEuros();
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida, intente nuevamente.\n");
        }
    } while(opcion != 4);
    
    return 0;
}

void mostrarMenu() {
    printf("\n--- Conversor de Monedas ---\n");
    printf("1. Convertir desde Quetzales (GTQ)\n");
    printf("2. Convertir desde Dolares (USD)\n");
    printf("3. Convertir desde Euros (EUR)\n");
    printf("4. Salir\n");
}

void convertirQuetzales() {
    float cantidad, resultado;
    int opcion;
    
    printf("Ingrese la cantidad en Quetzales (GTQ): ");
    scanf("%f", &cantidad);
    
    printf("\nSeleccione la moneda a la que desea convertir:\n");
    printf("1. Dolares (USD)\n");
    printf("2. Euros (EUR)\n");
    scanf("%d", &opcion);
    
    if(opcion == 1) {
        resultado = cantidad / 7.75;  // Tasa de conversión aproximada GTQ a USD
        printf("%.2f Quetzales equivale a %.2f Dolares.\n", cantidad, resultado);
    } else if(opcion == 2) {
        resultado = cantidad / 8.55;  // Tasa de conversión aproximada GTQ a EUR
        printf("%.2f Quetzales equivale a %.2f Euros.\n", cantidad, resultado);
    } else {
        printf("Opcion invalida.\n");
    }
}

void convertirDolares() {
    float cantidad, resultado;
    int opcion;
    
    printf("Ingrese la cantidad en Dolares (USD): ");
    scanf("%f", &cantidad);
    
    printf("\nSeleccione la moneda a la que desea convertir:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Euros (EUR)\n");
    scanf("%d", &opcion);
    
    if(opcion == 1) {
        resultado = cantidad * 7.75;  // Tasa de conversión aproximada USD a GTQ
        printf("%.2f Dolares equivale a %.2f Quetzales.\n", cantidad, resultado);
    } else if(opcion == 2) {
        resultado = cantidad * 0.93;  // Tasa de conversión aproximada USD a EUR
        printf("%.2f Dolares equivale a %.2f Euros.\n", cantidad, resultado);
    } else {
        printf("Opcion invalida.\n");
    }
}

void convertirEuros() {
    float cantidad, resultado;
    int opcion;
    
    printf("Ingrese la cantidad en Euros (EUR): ");
    scanf("%f", &cantidad);
    
    printf("\nSeleccione la moneda a la que desea convertir:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dolares (USD)\n");
    scanf("%d", &opcion);
    
    if(opcion == 1) {
        resultado = cantidad * 8.55;  // Tasa de conversión aproximada EUR a GTQ
        printf("%.2f Euros equivale a %.2f Quetzales.\n", cantidad, resultado);
    } else if(opcion == 2) {
        resultado = cantidad / 0.93;  // Tasa de conversión aproximada EUR a USD
        printf("%.2f Euros equivale a %.2f Dolares.\n", cantidad, resultado);
    } else {
        printf("Opcion invalida.\n");
    }
}
