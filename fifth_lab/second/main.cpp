//
// Created by sergeyampo on 10.12.2020.
//
#include <iostream>
#include <cmath>


using namespace std;

float calc(const float& x, const float& c) {
  return sin(cos(x) + c);
}

int main() {
  float x;
  cout << "Введите x: ";
  cin >> x;
  float c = 1.3f;

  float y;

  asm(
  "fld %[X]\n" //x
  "fcos\n" //cos(x)
  "fld %[C]\n"// 1.3, cos(x)
  "faddp\n" //cos(x) + 1.3
  "fsin\n"// sin(cos(x) + 1.3)
  "fstp  %[Y]\n" //y = sin(cos(x) + 1.3), st = 0
  : [Y] "=m"(y)
  : [X] "m"(x), [C] "m"(c)
  );

  cout << y << " == " << calc(x, c);

  return 0;
}

