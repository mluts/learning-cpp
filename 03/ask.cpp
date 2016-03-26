#include <iostream>
#include <utility>

void sort(std::string *strs, int size) {
  for(int i = 0; i < size-1; ++i) {
    for(int j = i+1; j < size; ++j) {
      if(strs[i].compare(strs[j]) > 0) {
        std::swap(strs[i], strs[j]);
      }
    }
  }
}

int main() {
  int times;
  std::cout << "Enter how many names you want to enter:\n";
  std::cin >> times;
  std::cin.ignore(256, '\n');
  if(times > 0) {
    std::string *names = new std::string[times];
    std::cout << "Ok, now enter some names\n";

    for(int i = 0; i < times; ++i) {
      std::getline(std::cin, names[i]);
    }

    std::cout << "It's enough, Thank you.\nNow i'll sort them for you:\n";

    sort(names, times);
    for(int i = 0; i < times; ++i) {
      std::cout << names[i] << "\n";
    }
    delete[] names;
  }
}
