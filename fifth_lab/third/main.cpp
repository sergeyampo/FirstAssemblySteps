//
// Created by sergeyampo on 10.12.2020.
//
#include <iostream>
#include <cmath>


float calculate(const float& x, const float& c) {
  return sin(cos(x) + c);
}

extern "C" float calc(float, float);

using namespace std;

int main() {
  float x = 4.0;
  float c = 11.0;

  cout << calc(x, c) << " == " << calculate(x, c);

  return 0;
}
