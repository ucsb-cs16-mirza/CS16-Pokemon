// pokemon.h
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <cinttypes>

typedef uint32_t uint32;

class Pokemon {
    public:
        Pokemon( std::string name, uint32 ( *checksum )() );
        ~Pokemon();
    private:
        std::string name;
        uint32 ( *checksum )();
};

#endif
