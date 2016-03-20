#include <iostream>
using namespace std;

void print_digits() {
  for(float i = 1.25; i < 5; i += 0.11) {
    cout << i;
    cout << "\n";
  }
}

int main() {
  print_digits();
}
