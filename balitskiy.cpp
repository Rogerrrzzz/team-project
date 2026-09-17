#include "balitskiy.h"
#include <cmath>

// Сумма гармонического ряда: 1 + 1/2 + ... + 1/n
double harmonicSum(int n) {
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += 1.0 / i;
  }
  return sum;
}

// Сумма квадратов: 1^2 + 2^2 + ... + n^2
long long squaresSum(int n) {
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (long long)i * i;
  }
  return sum;
}