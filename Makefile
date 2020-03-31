CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all: bin/c_compiler

src/cparser.tab.cpp src/cparser.tab.hpp : src/cparser.y
	bison -v -d src/cparser.y -o src/cparser.tab.cpp

src/clexer.yy.cpp: src/clexer.flex src/cparser.tab.hpp
	flex -o src/clexer.yy.cpp src/clexer.flex

bin/c_compiler : src/c_compiler.o src/cparser.tab.o src/clexer.yy.o src/cparser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^

clean :
	rm src/*.o
	rm src/*.tab.cpp
	rm src/*.tab.hpp
	rm src/*.yy.cpp
	rm bin/*
