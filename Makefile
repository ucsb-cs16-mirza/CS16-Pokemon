CXX=g++
CXXFLAGS=--std=c++11

all: src/pokemon.o

src/pokemon.o: src/pokemon.cpp src/pokemon.h
	${CXX} ${CXXFLAGS} -o $@ -c src/pokemon.cpp

clean: 
	rm -f src/pokemon.o
