#include"Class_A.h"
#include<cmath>



A::A() {R_a = 0;}
int A::rating(int x) {
  R_a = x;
  return R_a;
}

double A::elo(float m, float n) {
  return 1.0 / (1.0 + pow(10.0, (double)(m - n) / 400.0));
}

int A::R(int a, int b, float c, double d) {
  return round(a + b * (c - d));
}

