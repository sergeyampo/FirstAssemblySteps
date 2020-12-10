//
// Created by sergeyampo on 10.12.2020.
//
#include "task.h"
#include <iostream>


using namespace std;

int main() {
  cout.precision(6);

  // точность 7 знаков
  cout << "\nОперанды одинарной точности (float):"
	   << "\na = " << 95.0
	   << "\nb = " << 1.0 << "\nРезультат: " <<
	   compute(float(95.0f), float(1.0f))
	   << "\na = " << 95.0 << "\n"
	   << "\nb = " << 0.1 << "\n" <<
	   "Результат: " << compute(float(95.0f), float(0.1f));

  // точность 16 знаков
  cout << "\nОперанды двойной точности (double):"
	   << "\na = " << 95.0
	   << "\nb = " << 1.0 << "\nРезультат: " <<
	   compute(double(95.0), double(1.0))
	   << "\na = " << 95.0 << "\n"
	   << "\nb = " << 0.1 << "\n" <<
	   "Результат: " << compute(double(95.0), double(0.1));
}

