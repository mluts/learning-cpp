#include <iostream>
using namespace std;

int readNumber(const char question[]) {
  int n;
  cout << question << endl;
  cin >> n;
  return n;
}

void writeNumber(int n) {
  cout << "X+Y = " << n << endl;
}

int main() {
  int x = 0, y = 0;
  x = readNumber("Enter X");
  y = readNumber("Enter Y");
  writeNumber(x + y);
}
