#include <ostream>
#include <sys/types.h>
#include <typeinfo>
#include <iostream>
#include <format>


void FactorNumber(int xint, int yint, uint num) {
 /*  int z =  x / y;
  std::cout << z << std::endl; */

  for (int i = 0; i <= yint; i++) {
      for (int j = 0; j <= yint; j++) {

          if (/*i%j == 0 &&*/ i*j == num) {

              std::cout << i << " and " << j << " is a factor of " << num << std::endl;

          }
      }

  }
}
void GetNum() {
    uint factnum;
    std::cout << "Enter Positive number to factor: ";
    std::cin >> factnum;
    FactorNumber(factnum, factnum, factnum);
}
int main() {
   // typedef unsigned int uint;
    GetNum();
}
