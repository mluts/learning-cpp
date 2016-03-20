#include <iostream>
#include <fstream>
#include <string>

void show_usage() {
  std::cout <<
"  USAGE:\n"
"    rot13 FILE | -\n"
"    rotates contents of FILE or stdin, and prints result to stdout\n";
}

char rotate_char(char ch) {
  if('A' <= ch && ch <= 'Z') {
    char len = 'Z'-'A'+1;
    return ((ch-'A')+(len/2))%len + 'A';
  } else if('a' <= ch && ch <= 'z') {
    char len = 'z'-'a'+1;
    return ((ch-'a')+(len/2))%len + 'a';
  } else {
    return ch;
  }
}

void rotate_stdin()
{
  std::string in;
  while(getline(std::cin, in)) {
    for(std::string::iterator i = in.begin(); i != in.end(); ++i) {
      std::cout << rotate_char(*i);
    }
    std::cout << '\n';
  }
}

void rotate_file(std::string fname) {
  std::ifstream file;
  std::string in;
  file.open(fname);

  if(file.is_open()) {
    while(getline(file, in)) {
      for(std::string::iterator i = in.begin(); i != in.end(); ++i) {
        std::cout << rotate_char(*i);
      }
      std::cout << '\n';
    }
    file.close();
  } else {
    std::cout << "Can't read file: " << fname << '\n';
  }
}

int main(const int argc, const char **argv) {
  if(argc < 2) {
    std::cout << "Wrong number of arguments!";
    show_usage();
    return 1;
  }
  
  std::string fname (argv[1]);

  if(fname.compare("-") == 0) {
    rotate_stdin();
  } else {
    rotate_file(fname);
  }
}
