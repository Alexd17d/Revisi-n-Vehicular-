// Declaración de bibliotecas y constantes
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "matriculaVehicular.h"
#include "utilidades.h"
#include "login.h"
#define MAX_USERS 100

// Menu para login o registro de usuario
int loginMenu(){
	int opcionLogin;
    int accesoPermitido = 0;
    int tipoUsuario = 0; // 0 = no definido, 1 = usuario normal, 2 = administrador

    // Menú de autenticación
    do {
        limpiarPantalla();
        printf("\n\t-- SISTEMA DE USUARIOS --\n");
        printf("1. Registrarse\n");
        printf("2. Iniciar sesion\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion:");
        scanf("%d", &opcionLogin);
        while (getchar() != '\n');

        switch (opcionLogin) {
            case 1:
                limpiarPantalla();
                SignUser();
                break;
            case 2:
		limpiarPantalla();
	 	int intentos=0;
		  while (intentos < 3 && !accesoPermitido) {
	        tipoUsuario = LogUser();
            accesoPermitido = (tipoUsuario >0); // Acceso permitido si es usuario normal o administrador
            limpiarPantalla();
	        if (!accesoPermitido) {
	            intentos++;
	            if (intentos < 3) {
	                printf("Intento %d/3 fallido. Intente nuevamente.\n", intentos+1);
	            } else {
                printf("Ha superado el numero maximo de intentos.\n");
                mensajeSalida();
                return 0;  // Simula que el usuario eligió la opcion 3 "Salir"
            }
        }
    }     
                break;
            case 3:
                printf("Saliendo del sistema de usuarios...\n");
                mensajeSalida();
                return 0;  // Termina completamente el programa
            default:
                printf("Opción no valida. Intente de nuevo.\n");
        }
    } while (!accesoPermitido);

    return tipoUsuario; // Acceso exitoso
}

// menu usuario
void mostrarMenuUsuario() {
    printf("\n\t-- MENU DE MATRICULACION VEHICULAR --\n");
    printf("1. Registrar nuevo vehiculo\n");
    printf("2. Buscar vehiculo por placa\n");
    printf("3. Empezar proceso de matriculacion\n");
    printf("4. Generar comprobante\n");
    printf("5. Salir\n");
    printf("Seleccione una opcion: ");
}
// Se muestra al usuario el menu
void mostrarMenuAdministrador() {
	printf("\n\t-- MENU DE ADMINISTRADOR --\n");
	printf("1. Listar todos los vehiculos\n");
	printf("2. Listar los vehiculos matriculados\n");
	printf("3. Salir\n");
	printf("Seleccione una opcion: ");
}

//Función principal
int main() {
    int opcion;
    int tipoUsuario = loginMenu();
    if (tipoUsuario == 0) {
	printf("Finalizando el programa...\n");
    return 0; // Finaliza si el usuario selecciona "Salir" o falla 3 intentos
    }

    do {
        limpiarPantalla();
        if (tipoUsuario == 2) {
            mostrarMenuAdministrador();
        } else {
            mostrarMenuUsuario();
        }
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        while (getchar() != '\n'); // Limpiar el buffer de entrada
        // Administrador
        if (tipoUsuario == 2) {
            switch (opcion) {
                case 1:
                    limpiarPantalla();
                    listarVehiculosArchivo();
                    break;
                case 2:
                    limpiarPantalla();
                    listarVehiculosMatriculadosArchivo();
                    break;
                case 3:
                    printf("Cerrando sesión.........\nVuelva Pronto!\n");
                    break;
                default:
                    printf("Opción no válida, por favor intente de nuevo.\n");
                    mensajeSalida();
            }
        } else { 
            // Usuario normal
        switch (opcion) {
            case 1:
                limpiarPantalla();
                registrarVehiculoArchivo();
                break;
            case 2:
                limpiarPantalla();
                buscarVehiculoPorPlacaArchivo();
                break;
            case 3:
                limpiarPantalla();
                procesoMatriculacionArchivo();
                break;
            case 4:
                limpiarPantalla();
                generarComprobanteArchivo();
                break;
            case 5:
                printf("Cerrando sesión.........\nVuelva Pronto!\n");
                break;
            default:
                printf("Opción no válida, por favor intente de nuevo.\n");
                mensajeSalida();
        }
        }

    } while ((tipoUsuario == 2 && opcion != 3) || (tipoUsuario == 1 && opcion != 5));

    return 0;
}
