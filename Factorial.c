#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int res = 1;
  if (n == 0){
  printf("1\n");
} else {
  while (n > 0){
    res = res * n;
    n = n-1;
  }
  printf("%d\n", res);
}
  return 0;
}
