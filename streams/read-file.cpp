#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class File
{
  public:
    std::string path;
    std::string content;

    File(const char *filePath)
    {
      path = filePath;
    }

    void read()
    {
      try
      {
        std::ifstream fstream;
        std::stringstream readBuf;
        fstream.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        fstream.open(path);
        readBuf << fstream.rdbuf();
        content = readBuf.str();
        fstream.close();
      }
      catch(const std::ifstream::failure e)
      {
        std::cerr << "CAN'T READ THE FILE\n";
      }
    }

    void print()
    {
      std::cout << content;
    }
};

int main(const int argc, const char *argv[])
{
  if(argc > 1) {
    File f(argv[1]);
    f.read();
    f.print();
  }
}
