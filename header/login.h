#ifndef LOGIN_H
#define LOGIN_H

#define MAX_USUARIO 50
#define MAX_CONTRASENIA 50

void SignUser();   // Registro
int LogUser();     // 0 = falla, 1 = Usuario normal, 2 = administrador

#endif