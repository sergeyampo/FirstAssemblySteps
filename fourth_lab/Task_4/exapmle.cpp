#include <iostream>
#include <stdio.h>


using namespace std;

void fun_task1_4gays(uint32_t num1 = 12, uint32_t num2 = 23) {
  uint32_t res;
  asm(
  "movl %[num1] , %[res]\n"
  "add %[num2] , %[res]"
  :[res]"+r"(res)
  :[num1]"r"(num1), [num2]"r"(num2)
  :"cc"
  );
  std::cout << "Task1_Cheems: " << num1 << " + " << num2 << " = " << res << "\n";
}

void fun_task1_not4gays(uint32_t num1 = 12, uint32_t num2 = 23) {
  cout << "Task1_Doge: " << num1 << " + " << num2 << " = ";
  asm(
  "add %[num2] , %[res]\n"
  "movl $0, %[num2]\n"
  "adc %[num2], %[num2]"
  :[res]"+r"(num1), [num2]"+r"(num2)
  ::
  "cc"
  );
  std::cout << num1 << "\n";
  if (num2 == 1) cout << "Perepolnenie proizoshlo\n";
  else cout << "Perepolnenie ne proizoshlo\n";
}

void fun_task2(int num1) {
  cout << "Task 2: " << num1 << " % 4 - " << num1 << " = ";
  asm(
  "movl %[N1], %%eax\n"
  "and $3, %[N1]\n"
  "sub %%eax, %[N1]"
  :[N1]"+r"(num1)
  ::
  "%eax", "cc"

  );
  cout << num1 << endl;
}

void fun_task3(int num1) {
  cout << "Task 3: " << num1 << " % 4 - " << num1 << " = ";
  asm(
  "and $3, %0\n"
  "sub %1, %0\n"
  :"+r"(num1)
  :"r"(num1)
  :"cc"
  );
  cout << num1 << endl;
}

void fun_task4_toASCII(int num = 6) {
  asm(
  "or $48, %[num]"
  :[num]"+r"(num)
  ::
  "cc"
  );
  cout << "Int to ASCII: " << (char)num << endl;
}

void fun_task4_fromASCII(char num) {
  asm(
  "and $15, %[num]"
  :[num]"+r"(num)
  ::
  "cc"
  );
  cout << "ASCII to Int: " << (int)num << endl;
}

void fun_task4_toTOP(char letter) {
  cout << letter << " -> ";
  asm(
  "xor $32, %[num]"
  :[num]"+r"(letter)
  ::
  "cc"
  );
  cout << letter << endl;
}

void chastnoe(int num1 = 50, int num2 = 7) {
  asm(
  "movl %[NUM1], %%eax\n"
  "movl $0, %%edx\n"
  "div %[NUM2]\n"
  "movl %%eax, %[NUM1]"
  : [NUM1]"+r"(num1)
  :[NUM2]"r"(num2)
  :"%eax", "%edx", "cc"
  );
  cout << num1 << endl;
}

int main() {
  int num;
  /*
  cin>>num;
  fun_task1_4gays(num,5);
  fun_task1_not4gays(num,5);
  fun_task2(num);
  fun_task3(num);
  fun_task4_toASCII(num);
  fun_task4_fromASCII(num+'0');

  for(int i=97;i<=122;i++)
  {
	  fun_task4_toTOP((char)i);
  }
  for(int i=65;i<=90;i++)
  {
	  fun_task4_toTOP((char)i);
  }*/
  chastnoe();

  return 0;
}

