#include <iostream>

int factorial(int subject) {
  if (subject == 0 || subject == 1) {
    return 1;
  }
  if (subject > 1) {
    int result = 1;
    for (int iteration = subject; iteration > 1; iteration--) {
      result *= iteration;
    }
    return result;
  }
}

int power(int base, int exponent) {
  if (exponent == 1) {
    return 1;
  }
  if (exponent > 1) {
    int result = 1;
    for (int iteration = exponent; iteration > 1; iteration--) {
      result *= base;
    }
  return result;
  }
}

int degToRad(int deg) {
  int radians = 3.14159265359 / 180;
  int result = deg * radians;
  return result;
}

int sin(int x) {
  // uses degrees
  x = degToRad(x);
  int sum = 0;
  int limit = 10;
  for (int k = 0; k < limit; k++) {
    sum += (power(-1, k) * power(x, 2 * k + 1)) / factorial(2 * k + 1);
    }
  return sum;
}

int main() {
  std::cout<<sin(90)<<std::endl;
  return 0;
}
