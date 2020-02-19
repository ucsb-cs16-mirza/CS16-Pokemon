#ifndef MAIN_H
#define MAIN_H

#define ADDRESS uintptr_t addr
#define POKEBALL return ( void* ) addr;

#include <iostream>
#include <string>
#include <cinttypes>
#include "../../../src/pokemon.h"

void* catchMe();

#endif
