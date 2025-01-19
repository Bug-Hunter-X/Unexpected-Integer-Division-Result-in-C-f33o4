#include <stdio.h>

int main() {
  int x = 10;
  int y = 5;
  float z = (float)x / y; // Cast x to float
  printf("%f\n", z);
  return 0;
}

//Alternative solution:
float z1 = x / (float)y; // Cast y to float
float z2 = (float)x / (float)y; // Cast both to float