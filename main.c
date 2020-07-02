#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void costoDeLapices();

void almacenFactory();

void laDoniaRestaurante();

void vinicultores();

void viajeDeEstudios();

void enviosDePaquetesInternacionales();

void estacionamientosEstablecimiento();

void descubrirMenorEdad();

void becaUniversitaria();

void sueldoSemanal();

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

void horaHomo();

void pagoEnCuotas();

void pagoDeEmpresaPorSueldoSemanal();

void interesesBancarios();

void gerenteDeCompania();

/*
 * Made with love by Victor Abrego (a.k.a Elb1to)
 * Github: https://github.com/Elb1to
 * Project repository: https://github.com/Elb1to/Trabajo2_DS1
 *
 * Coded on May 25th of 2020
 * Latest commit: June 15th, 2020
 */

int main() {
    int selectOption;
    system("cls");

    printf("\n\n\n[]===========================================[]\n\n");
    printf("Selecciona un algoritmo que desees probar.");
    printf("\n\n[]===========================================[]\n");
    printf("1. Costo de lapices\n");
    printf("2. Almacen Factory\n");
    printf("3. Restaurante\n");
    printf("4. Vinicultores\n");
    printf("5. Viaje de estudios\n");
    printf("6. Envio de paquetes internacional\n");
    printf("7. Estacionamientos\n");
    printf("8. Edad de 3 personas\n");
    printf("9. Beca Universitaria\n");
    printf("10. Sueldo semanal\n");
    printf("[]===========================================[]\n");
    printf("\n\nIntroduzca el numero del algoritmo al que quiere ingresar y probar: ");
    scanf("%i", &selectOption);

    switch (selectOption) {
        case 1:
            system("cls");
            costoDeLapices();
            getch();
            break;
        case 2:
            system("cls");
            almacenFactory();
            getch();
            break;
        case 3:
            system("cls");
            laDoniaRestaurante();
            break;
        case 4:
            system("cls");
            vinicultores();
            break;
        case 5:
            system("cls");
            viajeDeEstudios();
            break;
        case 6:
            system("cls");
            enviosDePaquetesInternacionales();
            break;
        case 7:
            system("cls");
            estacionamientosEstablecimiento();
            break;
        case 8:
            system("cls");
            descubrirMenorEdad();
            break;
        case 9:
            system("cls");
            becaUniversitaria();
            break;
        case 10:
            system("cls");
            sueldoSemanal();
            break;
        case 11:
            system("cls");
            numeroMayor();
            break;
        case 12:
            system("cls");
            sumaDeNumeros();
            break;
        case 13:
            system("cls");
            promedioDeEdades();
            break;
        case 14:
            system("cls");
            estaturaPromedio();
            break;
        case 15:
            system("cls");
            ahorroPorAnio();
            break;
        case 16:
            system("cls");
            diferenciasDeNumeros();
            break;
        case 17:
            system("cls");
            numeroPares();
            break;
        case 18:
            system("cls");
            sucesionFibonacci();
            break;
        case 19:
            system("cls");
            registroDeHoras();
            break;
        case 20:
            system("cls");
            distanciaEntreCarreteras();
            break;
        case 21:
            system("cls");
            horaHomo();
            break;
        case 22:
            system("cls");
            pagoEnCuotas();
            break;
        case 23:
            system("cls");
            pagoDeEmpresaPorSueldoSemanal();
            break;
        case 24:
            system("cls");
            interesesBancarios();
            break;
        case 25:
            system("cls");
            gerenteDeCompania();
            break;
    }
}

/*
 * Problem #1
 * Victor Abrego - 05/25/2020
 */
void costoDeLapices() {
    int cantidadLapices;
    float precioTotal;

    printf("\n\nIntroducir la cantidad de lapices a pagar: ");
    scanf("%i", &cantidadLapices);

    if (cantidadLapices >= 1000) {
        precioTotal = cantidadLapices * 0.85;
    } else {
        precioTotal = cantidadLapices * 0.90;
    }
    printf("El total a pagar por %i lapices es %.2f", cantidadLapices, precioTotal);

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #2
 * Victor Abrego - 05/25/2020
 */
void almacenFactory() {
    float precioDelTraje, precioTotal, precioConDescuento;

    printf("\n\nIntroduzca el costo del traje que desea comprar: ");
    scanf("%f", &precioDelTraje);

    // TODO: Mostrar el precio con decimales
    if (precioDelTraje > 2500) {
        precioConDescuento = precioDelTraje * 0.15;
        precioTotal = precioDelTraje - precioConDescuento;
        printf("El precio total del traje es: %.2f debido a que tiene un 15 porciento de descuento.", precioTotal);
    } else {
        precioConDescuento = precioDelTraje * 0.08;
        precioTotal = precioDelTraje - precioConDescuento;
        printf("El precio total del traje es: %.2f debido a que tiene un 8 porciento de descuento.", precioTotal);
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #3
 * Victor Abrego - 05/25/2020
 */
void laDoniaRestaurante() {
    int cantidadDePersonas;
    float precioTotal;

    printf("\n\nLa Doña\n");
    printf("Tarifas\n");
    printf(" * Platillo por  persona: $35.00\n");
    printf(" * Platillo por persona $20.00. [Solo aplica si hay mas de 200 personas, aplica hasta 300.\n");
    printf(" * Platillo por persona $15.00. [Solo aplica si hay mas de 300 personas.\n");
    printf("\nIntroduzca la cantidad de personas que asistiran: ");
    scanf("%i", &cantidadDePersonas);

    if (cantidadDePersonas >= 200 && cantidadDePersonas <= 300) {
        precioTotal = cantidadDePersonas * 20.00;
    }
    if (cantidadDePersonas >= 301) {
        precioTotal = cantidadDePersonas * 15.00;
    }
    printf("Precio total a pagar por: %i invitados. USD$%.2f", cantidadDePersonas, precioTotal);

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #4
 * Victor Abrego - 05/25/2020
 */
void vinicultores() {
    int tipo, tamanio;
    float precio, precioTotal;

    printf("Precio inicial por kilo de uva: ");
    scanf("%f", &precio);

    printf("Introduzca el tipo de uva (1 o 2): ");
    scanf("%i", &tipo);

    printf("Introduzca el tamanio de la uva (1 o 2): ");
    scanf("%i", &tamanio);

    if (tipo == 1) {
        if (tamanio == 1) {
            precioTotal = precio + 0.20;
            printf("El precio total a pagar es: USD$%.2f", precioTotal);
        }
        if (tamanio == 2) {
            precioTotal = precio + 0.30;
            printf("El precio total a pagar es: USD$%.2f", precioTotal);
        }
    }
    if (tipo == 2) {
        if (tamanio == 1) {
            precioTotal = precio - 0.30;
            printf("El precio total a pagar es: USD$%.2f", precioTotal);
        }
        if (tamanio == 2) {
            precioTotal = precio - 0.50;
            printf("El precio total a pagar es: USD$%.2f", precioTotal);
        }
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #5
 * Victor Abrego - 05/25/2020
 */
void viajeDeEstudios() {
    int cantidadDeAlumnos;
    float precioTotal;

    printf("Introduzca la cantidad de alumnos que asistiran: ");
    scanf("%i", &cantidadDeAlumnos);

    if (cantidadDeAlumnos >= 100) {
        precioTotal = cantidadDeAlumnos * 65.00;
        printf("\nPrecio a pagar por alumno: USD$65.00\n");
        printf("Precio total a pagar: USD$%.2f", precioTotal);
    }
    if (cantidadDeAlumnos >= 50 && cantidadDeAlumnos < 100) {
        precioTotal = cantidadDeAlumnos * 70.00;
        printf("\nPrecio a pagar por alumno: USD$70.00\n");
        printf("Precio total a pagar: USD$%.2f", precioTotal);
    }
    if (cantidadDeAlumnos < 50 && cantidadDeAlumnos >= 30) {
        precioTotal = cantidadDeAlumnos * 95.00;
        printf("\nPrecio a pagar por alumno: USD$95.00\n");
        printf("Precio total a pagar: USD$%.2f", precioTotal);
    }
    if (cantidadDeAlumnos < 30) {
        precioTotal = cantidadDeAlumnos * 4000.00;
        printf("\nPrecio a pagar por alumno: USD$4000.00\n");
        printf("Precio total a pagar: USD$%.2f", precioTotal);
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #6
 * Victor Abrego - 05/25/2020
 */
void enviosDePaquetesInternacionales() {
    int zonaDeProcedencia;
    float precio, peso, precioTotal;

    printf("Introduzca el peso del paquete: ");
    scanf("%f", &peso);

    if (peso >= 5) {
        printf("El peso del paquete excede los 5 kg's. El paquete sera rechazado.\nEste paquete no podra ser transportado por cuestiones de logistica y seguridad.");
    } else {
        printf("Introduzca el precio del paquete: ");
        scanf("%f", &precio);

        printf("Zonas de procedencia\n\n");
        printf("1. America del Norte - $11.00 * gramo\n");
        printf("2. America Central - $10.00 * gramo\n");
        printf("3. America del Sur - $12.00 * gramo\n");
        printf("4. Europa - $24.00 * gramo\n");
        printf("5. Asia - $27.00 * gramo\n\n");
        printf("Introduzca el numero de la zona de procedencia (1-5): ");
        scanf("%i", &zonaDeProcedencia);

        if (zonaDeProcedencia == 1) {
            precioTotal = precio * 11.00;
        }
        if (zonaDeProcedencia == 2) {
            precioTotal = precio * 10.00;
        }
        if (zonaDeProcedencia == 3) {
            precioTotal = precio * 12.00;
        }
        if (zonaDeProcedencia == 4) {
            precioTotal = precio * 24.00;
        }
        if (zonaDeProcedencia == 5) {
            precioTotal = precio * 27.00;
        }
        printf("El precio total a pagar por el paquete es: USD$%.2f", precioTotal);
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #7
 * Victor Abrego - 05/25/2020
 */
void estacionamientosEstablecimiento() {
    int horasUsadas;
    float precioTotal;

    printf("Introduzca la cantidad de horas que has estado estacionado: ");
    scanf("%i", &horasUsadas);

    if (horasUsadas <= 2) {
        precioTotal = 5.00 * horasUsadas;
    }
    if (horasUsadas >= 2 && horasUsadas <= 5) {
        precioTotal = 4.00 * horasUsadas;
    }
    if (horasUsadas >= 5) {
        precioTotal = 3.00 * horasUsadas;
    }
    printf("Precio total a pagar por las horas estacionadas: USD$%.2f", precioTotal);

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #8
 * Victor Abrego - 05/25/2020
 */
void descubrirMenorEdad() {
    int edadUno, edadDos, edadTres;
    char nombreUno[64], nombreDos[64], nombreTres[64];

    printf("Introduzca el nombre y la edad de la primera persona.\n");
    printf("Nombre: ");
    scanf("%s", &nombreUno);
    printf("Edad: ");
    scanf("%i", &edadUno);

    printf("Introduzca el nombre y la edad de la segunda persona.\n");
    printf("Nombre: ");
    scanf("%s", &nombreDos);
    printf("Edad: ");
    scanf("%i", &edadDos);

    printf("Introduzca el nombre y la edad de la tercera persona.\n");
    printf("Nombre: ");
    scanf("%s", &nombreTres);
    printf("Edad: ");
    scanf("%i", &edadTres);

    if (edadUno < edadDos && edadUno < edadTres) {
        printf("%s es menor que los demas y tiene %i anios", nombreUno, edadUno);
    }
    if (edadDos < edadUno && edadDos < edadTres) {
        printf("%s es menor que los demas y tiene %i anios", nombreDos, edadDos);
    }
    if (edadTres < edadUno && edadTres < edadDos) {
        printf("%s es menor que los demas y tiene %i anios", nombreTres, edadTres);
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #9
 * Victor Abrego - 05/25/2020
 */
void becaUniversitaria() {
    int edad;
    float indice;

    printf("Introduzca del edad del estudiante: ");
    scanf("%i", &edad);

    printf("Introduzca el indice academico del estudiante: ");
    scanf("%f", &indice);

    if (edad >= 19) {
        if (indice >= 2.5) {
            printf("En base a su indice, usted recibira una beca en concepto de USD$2,000.00");
        }
        if (indice >= 2.0 && indice < 2.5) {
            printf("En base a su indice, usted recibira una beca en concepto de USD$1,000.00");
        }
        if (indice >= 1.85 && indice <= 1.99) {
            printf("En base a su indice, usted recibira una beca en concepto de USD$500.00");
        }
        if (indice < 1.85) {
            printf("Le incitamos a que estudie mas para la proxima entrega de becas universitarias!");
        }
    }
    if (edad <= 18) {
        if (indice >= 4.7) {
            printf("En base a su indice, usted recibira una beca en concepto de USD$3,000.00");
        }
        if (indice >= 4.5 && indice <= 4.6) {
            printf("En base a su indice, usted recibira una beca en concepto de USD$2,000.00");
        }
        if (indice >= 4.0 && indice <= 4.4) {
            printf("En base a su indice, usted recibira una beca en concepto de USD$100.00");
        }
        if (indice < 4.0) {
            printf("Le incitamos a que estudie mas para el proximo ciclo escolar!");
        }
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

/*
 * Problem #10
 * Victor Abrego - 05/25/2020
 */
void sueldoSemanal() {
    int horasTrabajadas, horasExtrasTrabajadas;
    float pagoPorHora, pagoNeto, pagoBase, pagoExtra;

    printf("Introduzca la cantidad de horas que ha trabajado durante la semana (0-40): ");
    scanf("%i", &horasTrabajadas);

    printf("Introduzca la cantidad de horas extras totales que ha trabajado durante la semana: ");
    scanf("%i", &horasExtrasTrabajadas);

    printf("Introduzca su salario por hora: ");
    scanf("%f", &pagoPorHora);

    horasTrabajadas = horasTrabajadas + horasExtrasTrabajadas;

    if (horasTrabajadas <= 40) {
        pagoNeto = horasTrabajadas * pagoPorHora;
        printf("Has ganado USD$%.2f por trabajar durante %i horas.", pagoNeto, horasTrabajadas);
    }
    if (horasTrabajadas >= 41 && horasTrabajadas <= 45) {
        pagoBase = (horasTrabajadas - horasExtrasTrabajadas) * pagoPorHora;
        pagoExtra = (horasTrabajadas - 40) * pagoPorHora * 2;
        pagoNeto = pagoExtra + pagoBase;
        system("cls");
        printf("Trabajaste 2 horas extras, por lo tanto se te pagaran las horas extras al doble!");
        printf("\nTus horas extras trabajadas equivalen a USD$%.2f,", pagoExtra);
        printf("\nTu salario base equivale a USD$%.2f", pagoBase);
        printf("\nTu salario neto equivale a USD$%.2f", pagoNeto);
        printf("\nTrabajaste durante un total de %i horas!", horasTrabajadas);
    }
    if (horasTrabajadas >= 46 && horasTrabajadas <= 50) {
        pagoBase = (horasTrabajadas - horasExtrasTrabajadas) * pagoPorHora;
        pagoExtra = (horasTrabajadas - 40) * pagoPorHora * 3;
        pagoNeto = pagoExtra + pagoBase;
        system("cls");
        printf("Trabajaste 2 horas extras, por lo tanto se te pagaran las horas extras al triple!");
        printf("\nTus horas extras trabajadas equivalen a USD$%.2f,", pagoExtra);
        printf("\nTu salario base equivale a USD$%.2f", pagoBase);
        printf("\nTu salario neto equivale a USD$%.2f", pagoNeto);
        printf("\nTrabajaste durante un total de %i horas!", horasTrabajadas);
    }
    if (horasTrabajadas > 51) {
        system("cls");
        printf("Trabajar mas de 50 horas no esta permitido!\nVaya a descansar en su casa.");
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

void consumoDeAgua() {
    int consumo;
    float centesimos1 = 0.15, centesimos2 = 0.20, centesimos3 = 0.35, centesimos4 = 0.80, total;

    printf("Consumo de agua");
    printf("Cant de metros cubicos: ");
    scanf("%d", &consumo);

    if (consumo <= 100) {
        total = consumo * centesimos1;
        printf("Costo a pagar por el agua: USD$%.2f", total);
    } else if (consumo > 100 && consumo <= 500) {
        total = consumo * centesimos2;
        printf("Costo a pagar por el agua: USD$%.2f", total);
    } else if (consumo > 500 && consumo <= 1000) {
        total = consumo * centesimos3;
        printf("Costo a pagar por el agua: USD$%.2f", total);
    } else if (consumo > 1000) {
        total = consumo * centesimos4;
        printf("Costo a pagar por el agua: USD$%.2f", total);
    }
    if ((consumo > 1 && consumo < 5) || consumo == 8) {
        centesimos1 = 0.15;
    }
    if (consumo > 1) if (consumo < 50 || consumo >= 8) centesimos1 = 5.89 * sqrt(6);
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

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 2
// Funciona
void sumaDeNumeros() {
    int numero, sumaGuardada = 0;

    printf("Introduzca 10 numeros. Todos estos numeros seran sumados.");

    for (int i = 0; i <= 10; i++) {
        scanf("%i", &numero);
        printf("\nNumero ingresado: %i", numero);
        sumaGuardada = sumaGuardada + numero;
        printf("\nNuevo total: %i", sumaGuardada);
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
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

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 5
// TODO: Verificar y corregir si no sirve como debe ser
void ahorroPorAnio() {
    int acum, dinero;

    for (int meses = 0; meses <= 12; meses++) {
        printf("\n\nIntroduzca la cantidad de dinero que desea ahorrar este mes: ");
        scanf("%i", &dinero);
        printf("\nEste mes has ahorrado: %i", dinero);
        acum = dinero + acum;
    }

    printf("\nHas ahorrado %i", acum);
    printf(" en un lapso de 12 meses!");

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
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

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
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

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
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

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 9
// TODO: Arreglar el guardado de dinero
void registroDeHoras() {
    int horas = 0, gHoras = 0, dias;
    float salario = 0.0, pago = 0.0;

    printf("\nIntroduzca lo que cobra por hora: ");
    scanf("%f", &salario);

    for (int i = 0; i < 6; i++) {
        printf("\nIntroduzca el numero del dia [1 - 6] en el que trabajo (en orden): ");
        scanf("%i", &dias);
        gHoras = gHoras + horas;
        switch (dias) {
            case 1:
                printf("\n\nIntroduzca cuantas horas trabajo el lunes: ");
                scanf("%i", &horas);
                //pago = salario * horas;
                printf("\nLunes (%i", horas);
                printf(" horas trabajadas). Recibira USD$%.2f", pago);
                break;
            case 2:
                printf("\n\nIntroduzca cuantas horas trabajo el martes: ");
                scanf("%i", &horas);
                //pago = salario * horas;
                printf("\nMartes (%i", horas);
                printf(" horas trabajadas). Recibira USD$%.2f", pago);
                break;
            case 3:
                printf("\n\nIntroduzca cuantas horas trabajo el miercoles: ");
                scanf("%i", &horas);
                //pago = salario * horas;
                printf("\nMiercoles (%i", horas);
                printf(" horas trabajadas). Recibira USD$%.2f", pago);
                break;
            case 4:
                printf("\n\nIntroduzca cuantas horas trabajo el jueves: ");
                scanf("%i", &horas);
                //pago = salario * horas;
                printf("\nJueves (%i", horas);
                printf(" horas trabajadas). Recibira USD$%.2f", pago);
                break;
            case 5:
                printf("\n\nIntroduzca cuantas horas trabajo el viernes: ");
                scanf("%i", &horas);
                //pago = salario * horas;
                printf("\nViernes (%i", horas);
                printf(" horas trabajadas). Recibira USD$%.2f", pago);
                break;
            case 6:
                printf("\n\nIntroduzca cuantas horas trabajo el sabado: ");
                scanf("%i", &horas);
                //pago = salario * horas;
                printf("\nSabado (%i", horas);
                printf(" horas trabajadas). Recibira USD$%.2f", pago);
                break;
        }
    }

    printf("\n\n\nTotal de horas trabajadas durante la semana: %i", gHoras);
    printf("\nPago total en base a las horas trabajadas: %.2f", pago);

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 10
// Funciona
void distanciaEntreCarreteras() {
    int p1 = 70, p2 = 150, interseccion;

    interseccion = p1 + (p2 - p1) / 2;
    printf("\nLa persona #1 se encontrara con la persona #2 en el kilometro: %i", interseccion);
    printf(" de la carretera.");

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 11
// Coding
void horaHomo() {
    int hora;
    scanf("%i", &hora);
    if (hora >= 0 && hora <= 12) {
        printf("Buenos dias");
        if (hora > 12 && hora <= 18) {
            printf("Buenas tardes");
            if (hora > 18 && hora <= 24) {
                printf("Buenas noches");
                if (hora <= 0 && hora >= 24) {
                    printf("Hora no valida");
                }
            }
        }
    }

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
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

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 13
// Coding
void pagoDeEmpresaPorSueldoSemanal() {
    //TODO: Write code xd

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 14
// Coding
void interesesBancarios() {
    //TODO: Write code xd

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}

// Problema 15
// Coding
void gerenteDeCompania() {
    //TODO: Write code xd

    getch();
    printf("Presione cualquier tecla para regresar al menu principal.");
    main();
}