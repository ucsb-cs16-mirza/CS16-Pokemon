#ifndef MAIN_H
#define MAIN_H

#define POKEBALL return ( ( int* ) &( e.number ) ) == ( ( int* ) ptr );

#include <iostream>
#include <string>
#include <cinttypes>
#include "../../../src/pokemon.h"

struct Encounter {
    std::string pokemon;
    int number;
};

uint32 catchMe(Encounter& e);

#endif
