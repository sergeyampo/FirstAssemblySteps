//
// Created by sergeyampo on 10.12.2020.
//
#include <type_traits>


using namespace std;

template<typename T,
	typename = enable_if_t<is_floating_point<T>::value>>
T compute(const T& a, const T& b) {
  return ((a + b) * (a + b) - (a * a + 2 * a * b)) / (T)(b * b);
}
