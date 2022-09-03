#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*Programa que lee caracteres de un archivo */
int main()
{
    char caracter; // caracter de la cadena leido
    FILE *arg = fopen("main.c", "rb");

    if (arg == NULL)
    {
        printf("No se puede abrir el archivo \n");
        return 1;
    }

    // linea por linea
    while (feof(arg) == 0)
    {
        caracter = fgetc(arg);
        printf("%c", caracter);
    }

    /*
     while (fgets(caracter, 100, arg) != NULL)
     {
         puts(caracter);
     }
    */
    
 
    fclose(arg);
    printf("\n fin del programa");
    return 0;
}
