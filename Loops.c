//dados en C
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int d = (rand() % 8) + 1;
  if (d < 6) printf("%d\n", d);
  else       printf("6\n");
  return 0;
}
