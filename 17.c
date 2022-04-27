//imprimir nums del 1 al 100 con resto = 3
//divididos por arg n

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int una_variable = 12;
  for (int i = 1; i <= 100; i++) {
    if (i % n == 3) printf("%d\n", i);
    int una_variable = 17;
    printf("%d\n", una_variable);
  }
  printf("%d\n", una_variable);
  return 0;
}
