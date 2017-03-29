#include"Class_B.h"
#include<cmath>



B::B() {R_b = 0;}
int B::rating(int y) {
  R_b = y;
  return R_b;
}

double B::elo(float m, float n) {
  return 1.0 / (1.0 + pow(10.0, (double)(m - n) / 400.0));
}

int B::R(int a, int b, float c, double d) {
  return round(a + b * (c - d));
}
