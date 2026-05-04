# Sistema de Matriculación Vehicular


Este proyecto es un sistema desarrollado en lenguaje **C** que permite gestionar el proceso de **matriculación vehicular**.

El programa funciona en consola y permite a los usuarios registrarse, iniciar sesión y registrar vehículos, mientras que un administrador puede consultar y gestionar la información almacenada.

## Funcionalidades

### Usuario
- Registro de usuario
- Inicio de sesión
- Registro de vehículos
- Consulta de vehículos
- Generación de comprobantes

### Administrador
- Visualización de usuarios registrados
- Consulta de vehículos registrados
- Gestión de datos del sistema


## Estructura del Proyecto

El proyecto está organizado de la siguiente manera:

*   **`src/`**: Contiene los archivos de código fuente (`.c`). Aquí reside la lógica del negocio.
*   **`header/`**: Contiene los archivos de cabecera (`.h`) con las definiciones de funciones y estructuras.
*   **`data/`**: Carpeta destinada al almacenamiento de persistencia en archivos de texto (`.txt`).
*   **`README.md`**: Documentación general del proyecto.


## Requisitos

- Compilador de C (GCC recomendado)
- Sistema operativo: Windows / Linux
- Visual Studio Code (opcional)

#  Archivos de Datos

El sistema utiliza archivos .txt para almacenar información:

* usuarios.txt → Datos de usuarios
* vehiculos.txt → Información de vehículos
* comprobantes.txt → Registros de matrícula

## Ejemplo de uso

Registrar un usuario
Iniciar sesión
Registrar un vehículo
Consultar datos guardados

## Ejecución del Programa

1. Clonar el repositorio:
```bash
git clone https://github.com/tu-usuario/tu-repositorio.git 

