#include <stdio.h>

void bacha(int a, int b)
{
  if (b == 0) {
    printf("Error: Division by zero\n");
  } else {
    printf("remainder = %d\n", a % b);
  }
}

void division(int a, int b)
{
  if (b == 0) {
    printf("Error: Division by zero\n");
  } else {
    printf("Quotient = %d\n", a / b);
  }
}

void csn(int a, int b)
{
  if (a == b) {
    printf("a and b are equal\n");
  }
  if (a > b) {
    printf("a is greater than b\n");
  }
  if (a < b) {
    printf("a is less than b\n");
  }
}
int main() {
  printf("enter  numbers\n");
  int a, b;
  if (scanf("%d", &a) != 1 || scanf("%d", &b) != 1) {
    printf("Error: Invalid input\n");
    return 1;
  }
  bacha(a, b);
  division(a, b);
  csn(a, b);

  return 0;
}
//https://www.adidas.co.in/cyberrun-shoes/IQ8896.html?forceSelSize=12
