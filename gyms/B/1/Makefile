CXX=g++
CXXFLAGS=--std=c++11 -Werror
POKEMON=Electrode

all: main
	./main

main: main.o ../../../src/pokemon.o ${POKEMON}/${POKEMON}.o
	${CXX} ${CXXFLAGS} -o $@ $^

main.o: main.cpp main.h
	${CXX} ${CXXFLAGS} -o $@ -c main.cpp

${POKEMON}/${POKEMON}.o: ${POKEMON}/${POKEMON}.cpp
	${CXX} ${CXXFLAGS} -o $@ -c $^

../../../src/pokemon.o: ../../../src/pokemon.cpp ../../../src/pokemon.h
	cd ../../../ && make

clean:
	rm -f *.o ${POKEMON}/*.o main
	cd ../../../ && make clean
