#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <cinttypes>
#include "../../../src/pokemon.h"

struct Encounter {
    std::string pokemon;
    int number;
};

void catchMe(Encounter* e, std::string pokemon, int number);

#endif
