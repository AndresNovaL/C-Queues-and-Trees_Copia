#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Se seleccionó el ejemplo 5 para el ejercicio entregable

// Definimos un 'struct' llamado Libro
struct Libro {
    char titulo[50]; // Título del libro de 50 bytes
    char autor[30]; // Autor del libro de 30 bytes
    int anio; // Año de publicación de 4 bytes
};

// Función que valida si el libro tiene información registrada
// Devuelve (true) si falta algún dato, de lo contrario (false) si está completo.
int estaVacio(struct Libro *l) {
    return (strlen(l->titulo) == 0 || strlen (l->autor) == 0 || (l->anio) == 0);
}

// Función principal del ejercicio
void ejercicioLibro(){
    // Se reserva memoria dinámica para (Libro)
    struct Libro *l = malloc(sizeof(struct Libro));
    // Se asignan valores a los campos del libro
    strcpy(l->titulo, "El Paciente"); // Nombre asignado
    strcpy(l->autor, "Juan Gómez-Jurado"); // Autor asignado
    l->anio = 2014; // Año de publicación asignado
    // Se procede a validar si el libro tiene información completa
    if (estaVacio(l)){
        printf("No hay información registrada.\n");
    } else {
        // Si hay datos, imprime la información del libro
        printf("Título: %s, Autor: %s, Año: %d\n", l->titulo,l->autor, l->anio);
    }
    
    // Se libera la memoria reservada
    free(l);
}

// Función main que es el punto de entrada del programa
int main() {
    ejercicioLibro(); // Llamamos la función principal del ejercicio
    return 0; // Finalización del programa
}
