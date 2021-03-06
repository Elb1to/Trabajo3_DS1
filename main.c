#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <io.h>
#include <string.h>

void numeroMayor();
void sumaDeNumeros();
void promedioDeEdades();
void estaturaPromedio();
void ahorroPorAnio();
void diferenciasDeNumeros();
void numeroPares();
void sucesionFibonacci();
void registroDeHoras();
void distanciaEntreCarreteras();
void tikiTaka();
void pagoEnCuotas();
void pagoDeEmpresaPorSueldoSemanal();
void interesesBancarios();
void gerenteDeCompania();

/*
 * Made with love by Victor Abrego (a.k.a Elb1to)
 * Github: https://github.com/Elb1to
 * Project repository: https://github.com/Elb1to/Trabajo3_DS1
 *
 * Coded on July 2nd of 2020
 * Latest commit: June 2nd, 2020
 */

int main() {
    int selectOption;
    system("cls");

    printf("\n\n\n[]===========================================[]\n\n");
    printf("Selecciona un algoritmo que desees probar.");
    printf("\n\n[]===========================================[]\n");
    printf("1. Determinar numero mayor\n");
    printf("2. Suma de 10 numeros\n");
    printf("3. Edad promedio\n");
    printf("4. Estatura promedio\n");
    printf("5. Ahorro cada 12 meses\n");
    printf("6. Determinar numeros positivos y negativos\n");
    printf("7. Generar numeros pares\n");
    printf("8. Sucesion de Fibonaci\n");
    printf("9. Determinar total de horas trabajadas\n");
    printf("10. Interseccion entre punto A y B\n");
    printf("11. Tienda Tiki Taka\n");
    printf("12. Compra al credito por 20 meses\n");
    printf("13. Salario en base a horas trabajadas\n");
    printf("14. Deposito bancario con intereses\n");
    printf("15. Impuesto por automoviles\n");
    printf("[]===========================================[]\n");
    printf("\n\nIntroduzca el numero del algoritmo al que quiere ingresar y probar: ");
    scanf("%i", &selectOption);

    switch (selectOption) {
        case 1:
            system("cls");
            numeroMayor();
            getch();
            break;
        case 2:
            system("cls");
            sumaDeNumeros();
            getch();
            break;
        case 3:
            system("cls");
            promedioDeEdades();
            break;
        case 4:
            system("cls");
            estaturaPromedio();
            break;
        case 5:
            system("cls");
            ahorroPorAnio();
            break;
        case 6:
            system("cls");
            diferenciasDeNumeros();
            break;
        case 7:
            system("cls");
            numeroPares();
            break;
        case 8:
            system("cls");
            sucesionFibonacci();
            break;
        case 9:
            system("cls");
            registroDeHoras();
            break;
        case 10:
            system("cls");
            distanciaEntreCarreteras();
            break;
        case 11:
            system("cls");
            tikiTaka();
            break;
        case 12:
            system("cls");
            pagoEnCuotas();
            break;
        case 13:
            system("cls");
            pagoDeEmpresaPorSueldoSemanal();
            break;
        case 14:
            system("cls");
            interesesBancarios();
            break;
        case 15:
            system("cls");
            gerenteDeCompania();
            break;
    }
}

// Problema 1
// Funciona
void numeroMayor() {
    int loopeos, mayor = 0, numero;

    printf("Introduzca la cantidad de numeros que desea comparar para obtener el mayor: ");
    scanf("%i", &loopeos);

    for (int i = 1; i <= loopeos; i++) {
        printf("Introduzca el valor del numero: ");
        scanf("%i", &numero);
        if (i == 1 || mayor < numero) {
            mayor = numero;
        }
    }

    printf("\nEl numero mas grande es: %i", mayor);

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 2
// Funciona
void sumaDeNumeros() {
    int numero, sumaGuardada = 0;

    printf("Introduzca 10 numeros\nTodos estos numeros seran sumados.");

    for (int i = 0; i <= 10; i++) {
        printf("\n\nNumero: ");
        scanf("%i", &numero);
        printf("\nNumero ingresado: %i", numero);
        sumaGuardada = sumaGuardada + numero;
        printf("\nNuevo total: %i", sumaGuardada);
    }

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 3
// Funciona
void promedioDeEdades() {
    int edad, edadesGuardadas = 0, cantidadDeAlumnos;

    printf("Introduzca la cantidad de alumnos que desea calcular para obtener la edad promedio: ");
    scanf("%i", &cantidadDeAlumnos);
    printf("\n\nIntroduzca la edad de %i", cantidadDeAlumnos);
    printf(" diferentes personas\n\n");

    for (int i = 1; i <= cantidadDeAlumnos; i++) {
        printf("\nIntroduzca la edad: ");
        scanf("%i", &edad);
        edadesGuardadas = edadesGuardadas + edad;
    }
    edadesGuardadas = edadesGuardadas / cantidadDeAlumnos;
    printf("\nEdad promedio: %i", edadesGuardadas);

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 4
// Funciona
void estaturaPromedio() {
    int cantidad = 0;
    float estatura, promedio = 0;
    char confirmacion;

    do {
        system("cls");
        printf("Ingrese la estatura de la persona: ");
        scanf("%f", &estatura);
        promedio = promedio + estatura;
        cantidad = cantidad + 1;
        printf("\n\nDesea repetir el proceso?");
        printf("\nPresione la tecla 'S' o 'N'");
        do {
            scanf("%s", &confirmacion);
        } while (confirmacion != 's' && confirmacion != 'n' && confirmacion != 'S' && confirmacion != 'N');
    } while (confirmacion == 's' || confirmacion == 'S');
    if (cantidad == 0) {
        promedio = 0;
    } else {
        promedio = promedio / cantidad;
    }

    printf("\nCantidad de estaturas introducidas: %i", cantidad);
    printf("\nEstatura promedio: %.2f", promedio);

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 5
// Funciona
void ahorroPorAnio() {
    float dinero, ahorrado = 0;

    for (int m = 1; m <= 12; m++) {
        printf("\nIntroduzca la cantidad de dinero que desea ahorrar este mes: ");
        scanf("%f", &dinero);
        printf("\nCantidad de dinero ahorrada este mes: USD$%.2f", dinero);
        ahorrado = ahorrado + dinero;
    }

    printf("\n\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nHas ahorrado: USD$:%.2f", ahorrado);
    printf(" en un lapso de 12 meses!");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 6
// Funciona
void diferenciasDeNumeros() {
    int numero, saveN = 0, saveP = 0, cantidad = 0;

    printf("\nIntroduzca la cantidad de numeros que utilizara: ");
    scanf("%i", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        scanf("%i", &numero);
        if (numero <= 0) {
            saveN++;
        } else {
            saveP++;
        }
    }

    printf("\n\nTotal de numeros negativos: %i", saveN);
    printf("\n\nTotal de numeros positivos: %i", saveP);

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 7
// Funciona
void numeroPares() {
    int par = 2;

    printf("Se mostraran en pantalla todos los numeros PARES del 0 al 100.\n\n");
    for (int i = 0; par < 100; i++) {
        par = par + 2;
        printf("  %i", par);
    }

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 8
// Funciona
void sucesionFibonacci() {
    int limite, fibo1 = 0, fibo2 = 1, fibo3;

    printf("\n\n=========================\nSucesion de Fibonacci\n=========================\n\n");
    printf("Introduzca la cantidad de sucesiones que quiere mostrar: ");
    scanf("%i", &limite);
    printf("%i ", fibo1);
    printf("%i ", fibo2);

    for (int i = 2; i <= limite; i++) {
        fibo3 = fibo1 + fibo2;
        printf("%i ", fibo3);
        fibo1 = fibo2;
        fibo2 = fibo3;
    }

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 9
// Funciona
void registroDeHoras() {
    int horas = 0, hrsAcum = 0;
    float salario = 0, pago = 0;
    char nombreDelDia[16];

    printf("\nIntroduzca su salario por hora: ");
    scanf("%f", &salario);

    for (int d = 1; d <= 6; d++) {
        switch (d) {
            case 1:
                strcpy(nombreDelDia, "Lunes");
                break;
            case 2:
                strcpy(nombreDelDia, "Martes");
                break;
            case 3:
                strcpy(nombreDelDia, "Miercoles");
                break;
            case 4:
                strcpy(nombreDelDia, "Jueves");
                break;
            case 5:
                strcpy(nombreDelDia, "Viernes");
                break;
            case 6:
                strcpy(nombreDelDia, "Sabado");
                break;
        }

        printf("\nCuantas horas ha trabajado el %s", nombreDelDia);
        printf("?");
        printf("\nHoras trabajadas: ");
        scanf("%i", &horas);
        hrsAcum = hrsAcum + horas;
    }

    pago = salario * hrsAcum;

    printf("\n\n\nTotal de horas trabajadas durante la semana: %i", hrsAcum);
    printf("\nPago total en base a las horas trabajadas: USD$%.2f", pago);

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 10
// Funciona
void distanciaEntreCarreteras() {
    int p1 = 70, p2 = 150, interseccion;

    interseccion = p1 + (p2 - p1) / 2;
    printf("\nLa persona #1 se encontrara con la persona #2 en el kilometro: %i", interseccion);
    printf(" de la carretera.");

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 11
// In Development
void tikiTaka() {
    /*
     * TODO: Write code xdxdxdx xD
     */

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 12
// Funciona
void pagoEnCuotas() {
    float pago = 5.0, pagoTotal;

    for (int i = 1; i <= 20; i++) {
        pago = pago * 2;
        printf("\nEl pago mensual es equivalente a: USD$%.2f", pago);
    }

    pagoTotal = (pago * 2) - 10;
    printf("\n\nEl pago total es: USD$%.2f", pagoTotal);

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 13
// Coding
void pagoDeEmpresaPorSueldoSemanal() {
    /*
     * TODO: Write code xdxdxdx xD
     */

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 14
// Coding
void interesesBancarios() {
    /*
     * TODO: Write code xdxdxdx xD
     */

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}

// Problema 15
// Coding
void gerenteDeCompania() {
    /*
     * TODO: Write code xdxdxdx xD
     */

    printf("\n\nPresione cualquier tecla para regresar al menu principal.");
    getch();
    main();
}