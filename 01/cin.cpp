#include <iostream>
using namespace std;

int main() {
  char answer = 0;
  bool did_answer = 0;
  cout << "I'm asking you some silly question. (y/n)\n";

  while(!did_answer) {
    cin >> answer;
    switch(answer) {
      case 'y':
        cout << "You've answered \"yes\"\n";
        did_answer = true;
        break;
      case 'n':
        cout << "You've answered \"no\"\n";
        did_answer = true;
        break;
      default:
        cout << "I didn't understand that :(\n";
    }
  }
  cout << "Now i'm freeing your terminal!\n";
  return 0;
}
