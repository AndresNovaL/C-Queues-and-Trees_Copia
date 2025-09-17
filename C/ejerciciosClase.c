/* Ejemplos de uso de punteros en C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejemplo 1: Puntero a variable
Este ejemplo muestra cómo declarar una variable entera, obtener su dirección y almacenarla en un puntero. Luego se imprime el valor de la variable y el valor al que apunta el puntero.
- int x = 5; // Se declara una variable entera y se inicializa en 5
- int *p = &x; // Se declara un puntero a int y se le asigna la dirección de x
- printf(...) // Se imprime el valor de x y el valor al que apunta p (que es x)
*/
void ejercicio1() {
    int a = 19;
    int *p = &a;
    printf("Ejercicio 1: a = %d, Puntero (*p) = %d\n", a, *p);
}

/*
Ejemplo 2: Modificar variable usando puntero
Se muestra cómo modificar el valor de una variable a través de su puntero.
- int x = 10; // Variable entera
- int *p = &x; // Puntero a x
- *p = 20; // Se modifica el valor de x usando el puntero
- printf(...) // Se imprime el nuevo valor de x
*/
void ejercicio2() {
    int b = 19;
    int *p = &b;
    *p = 29;
    printf("Ejercicio 2: b = %d\n", b);
}

/*
Ejemplo 3: Puntero a array
Se muestra cómo un puntero puede apuntar al primer elemento de un array.
- int arr[3] = {1, 2, 3}; // Array de enteros
- int *p = arr; // Puntero al primer elemento del array
- printf(...) // Se imprime el valor del primer elemento usando el puntero
*/
void ejercicio3() {
    int arr[5] = {11, 33, 55, 77, 99};
    int *p = arr;
    printf("Ejercicio 3: Primer elemento = %d\n", *p);
}

/*
Ejemplo 4: Recorrer array con puntero
Se recorre un array usando aritmética de punteros.
- int arr[5] = {...}; // Array de 5 enteros
- int *p = arr; // Puntero al primer elemento
- for(...) // Se recorre el array usando *(p + i) para acceder a cada elemento
*/
void ejercicio4() {
    int arr2[10] = {5, 15, 25, 35, 45, 55, 65, 75, 85, 95};
    int *p = arr2;
    printf("Ejercicio 4: Array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

/*
Ejemplo 5: Puntero a estructura
Se muestra cómo acceder a los campos de una estructura usando un puntero y el operador ->.
- struct Persona {...}; // Definición de la estructura
- struct Persona p1 = {...}; // Instancia de la estructura
- struct Persona *ptr = &p1; // Puntero a la estructura
- printf(...) // Se accede a los campos usando ptr->campo
*/
struct Persona {
    char nombre[25];
    int edad;
};

void ejercicio5() {
    struct Persona p1 = {"Andres", 19};
    struct Persona *ptr = &p1;
    printf("Ejercicio 5: %s tiene %d años\n", ptr->nombre, ptr->edad);
}

/*
Ejemplo 6: Puntero a puntero
Se muestra cómo un puntero puede apuntar a otro puntero.
- int x = 7; // Variable entera
- int *p = &x; // Puntero a x
- int **pp = &p; // Puntero a puntero p
- printf(...) // Se imprime el valor de x, *p y **pp
*/
void ejercicio6() {
    int c = 16;
    int *p = &c;
    int **pp = &p;
    printf("Ejercicio 6: c = %d, *p = %d, **pp = %d\n", c, *p, **pp);
}

/*
Ejemplo 7: Parámetro por referencia
Se muestra cómo modificar una variable fuera de una función usando un puntero como parámetro.
- void incrementar(int *n) {...} // Función que incrementa el valor apuntado
- int x = 10; // Variable
- incrementar(&x); // Se pasa la dirección de x
- printf(...) // Se imprime el valor modificado
*/
void incrementar(int *n) {
    (*n)++;
}
void ejercicio7() {
    int d = 49;
    incrementar(&d);
    printf("Ejercicio 7: d incrementado = %d\n", d);
}

/*
Ejemplo 8: Punteros y memoria dinámica
Se muestra cómo reservar memoria dinámica usando malloc y acceder a ella con punteros.
- int *p = malloc(...); // Reserva memoria para 3 enteros
- p[0] = ...; // Asigna valores
- printf(...) // Imprime los valores
- free(p); // Libera la memoria
*/
void ejercicio8() {
    int *p = (int*)malloc(sizeof(int) * 3);
    if (p != NULL) {
        p[0] = 125; p[1] = 235; p[2] = 345;
        printf("Ejercicio 8: %d %d %d\n", p[0], p[1], p[2]);
        free(p);
    }
}

/*
Ejemplo 9: Array de punteros
Se muestra cómo crear un array cuyos elementos son punteros a char (cadenas).
- char *nombres[3] = {...}; // Array de punteros a cadenas
- for(...) // Se recorre el array e imprime cada cadena
*/
void ejercicio9() {
    char *nombres[5] = {"Ana", "Luis", "Marta", "Liliana", "Cristopher"};
    printf("Ejercicio 9: ");
    for(int i = 0; i < 5; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    ejercicio9();
    return 0;
}
