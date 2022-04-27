//imprimir numeros de 1000 a 1999 de a 5 por linea
#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 1000;
  while (i <= 1999) {
    printf("%d ", i);
    i ++;
    if (i % 5 == 0) printf("\n");
  }
  return 0;
}
