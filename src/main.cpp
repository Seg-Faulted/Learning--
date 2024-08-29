#include <iostream>

void FactorNumber(int xint, int yint, uint num) {

  for (int i = 0; i <= yint; i++) {

          if (i*i == num) {

              std::cout << i << " and " << i << " is a factor of " << num << std::endl;

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
    GetNum();
}
