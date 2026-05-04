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
matriculacion_vehicular/
│
├── data/
│ ├── usuarios.txt
│ ├── vehiculos.txt
│ └── comprobantes.txt
│
├── header/
│ ├── login.h
│ ├── matriculaVehicular.h
│ ├── utilidades.h
│ └── validaciones.h
│
├── src/
│ ├── main.c
│ ├── login.c
│ ├── matriculaVehicular.c
│ ├── utilidades.c
│ └── validaciones.c
│
├── .vscode/
├── programa.exe
└── README.md


## Requisitos

- Compilador de C (GCC recomendado)
- Sistema operativo: Windows / Linux
- Visual Studio Code (opcional)


## Ejecución del Programa

1. Clonar el repositorio:
```bash
git clone https://github.com/tu-usuario/tu-repositorio.git 

#  Archivos de Datos

El sistema utiliza archivos .txt para almacenar información:

usuarios.txt → Datos de usuarios
vehiculos.txt → Información de vehículos
comprobantes.txt → Registros de matrícula
## Ejemplo de uso
Registrar un usuario
Iniciar sesión
Registrar un vehículo
Consultar datos guardados
