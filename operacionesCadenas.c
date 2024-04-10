#include <stdio.h>
#include <string.h>

int main() {
  char cadena1[50] = "Hola";
  char cadena2[50] = " mundo!";
  char cadenaConcatenada[100];

  // Concatenación usando strcat
  strcat(cadena1, cadena2);

  // Impresión de la cadena concatenada
  printf("La cadena concatenada es: %s\n", cadenaConcatenada);
char cadena[100];

    printf("Ingresa una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminamos el salto de línea del final de la cadena
    cadena[strcspn(cadena, "\n")] = '\0';

    // Calculamos la longitud de la cadena usando la función strlen()
    int longitud = strlen(cadena);

    printf("La longitud de la cadena es: %d\n", longitud);
  return 0;
}
