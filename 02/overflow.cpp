#include <iostream>

int main() {
  unsigned int n {0xffffffff};
  std::cout << "n = " << n << std::endl;
  n += 1;
  std::cout << "n + 1 = " << n << std::endl;
}
