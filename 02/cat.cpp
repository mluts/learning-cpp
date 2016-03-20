#include <iostream>
#include <fstream>
#include <string>

void show_usage() {
  std::cout <<
    "  USAGE:\n"
    "    cat FILE\n"
    "    prints FILE content to stdout\n";
}

int main(const int argc, const char* argv[]) {
  const char *fname = argv[1];
  std::ifstream file;
  if(argc < 2) {
    show_usage();
    return 1;
  }

  file.open(fname);

  if(file.is_open()) {
    std::string str;
    while(getline(file, str)) {
      std::cout << str << '\n';
    }
    file.close();
  } else {
    std::cout << "Can't open file: " << fname << '\n';
  }
}
