#include <random>


using namespace std;

extern "C" int rand_int(int from, int to) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(from, to);

  return dis(gen);
}