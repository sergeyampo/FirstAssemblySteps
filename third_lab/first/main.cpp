#include <stdio.h>


extern "C" int calculate(int x);

int main() {
  printf("%d", calculate(4));

  return 0;
}
