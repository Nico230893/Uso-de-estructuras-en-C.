/* Realizar un programa en C que le permita a un docente guardar una ficha de sus estudiantes que
contenga edad, nombre, apellido y promedio. El usuario debe poder elegir la cantidad de estudiantes
que va a cargar.
*/
#include <stdio.h>
#include <stdlib.h>

struct legajo{// creamos una estructura llamada legajo para almacenar los datos de una persona
    int edad;
    char nombre[10];
    char apellido[10];
    float promedio;
};

int main()
{
    int cant, i;
    struct legajo alumno[30];
    printf("Ingrese la cantidad de estudiantes: \n");
    scanf("%i", &cant);
    for (i=0; i<cant; i++)
    {
        printf("Ingrese la edad del estudiante %i:\n", i+1);
        scanf("%i", &alumno[i].edad);
        printf("Ingrese el nombre del estudiante %i:\n", i+1);
        scanf("%s", &alumno[i].nombre);
        printf("Ingrese el apellido del estudiante %i:\n", i+1);
        scanf("%s", &alumno[i].apellido);
        printf("Ingrese el promedio del estudiante %i:\n", i+1);
        scanf("%f", &alumno[i].promedio);
    }
    for (i=0; i<cant; i++)
    {
        printf("La edad del estudiante %i es: %i\n", i+1, alumno[i].edad);
        printf("El nombre del estudiante %i es: %s\n", i+1, alumno[i].nombre);
        printf("El apellido del estudiante %i es: %s\n", i+1, alumno[i].apellido);
        printf("El promedio del estudiante %i es: %f\n", i+1, alumno[i].promedio);
    }
    return 0;
}
