GCC = gcc -std=c++11 -Wall -g -lstdc++ -D_GLIBCXX_USE_CXX11_ABI=0

read-file: read-file.cpp
	${GCC} -o $@ $^

clean:
	rm read-file

.PHONY: clean
