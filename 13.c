#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  if (n <= 0) {
    printf("Aprende a usar mi progama\n");
    return 1;
  }
  int a = 0; //f1 = 0
  int b = 1; //f2 = 1
  int c = a + b;
  if(n == 1) {
    printf("%d ", a);
  } else
  if(n == 2) {
    printf("%d %d ", a, b);
} else
printf("%d %d ", a, b);
for (int i = 3; i <= n; i++) {
  c = a + b;
  printf("%d ", c);
  a = b;
  b = c;
}
printf("\n");
return 0;
}
