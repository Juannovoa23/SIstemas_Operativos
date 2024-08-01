#include <stdio.h>

#define MAX_MATERIAS 7

int main() {
    // Datos
    char nombre[] = "Juan Sebastian Novoa Garcia"; 
    char carrera[] = "Ing. Sistemas";
    int semestre = 6; 
    char *materias[MAX_MATERIAS] = {
        "Probabilidad", 
        "Sistemas Operativos", 
        "Desarrollo Web",  
        "Intro. Programacion Movil",
        "Inglés 5",
        "PSU",     
        "Intro. Nutricion"     
    };

    // Mostrar el menú
    printf("****************************************************\n");
    printf("    Nombre: %s\n", nombre);
    printf("    Carrera: %s\n", carrera);
    printf("    Semestre: %d\n\n", semestre);
    printf("    Materias:\n");

    for (int i = 0; i < MAX_MATERIAS; i++) {
        printf("        %d. %s\n", i + 1, materias[i]);
    }
       printf("****************************************************\n");

    return 0;
}
