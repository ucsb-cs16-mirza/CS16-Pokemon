#ifndef MAIN_H
#define MAIN_H

#define POKEBALL uint32 s = sizeof( pokemon ); s *= sizeof( pokemon[ 0 ] ); void* ptr = malloc( sizeof( uint32 ) + s ); *( ( uint32* ) ptr ) = s; char* a1 = ( char* ) ( pokemon ); char* a2 = ( ( char* ) ptr ) + sizeof( uint32 ); while( s-- ) { a2[s] = a1[s]; } return ptr;

#include <iostream>
#include <string>
#include <cinttypes>
#include "../../../src/pokemon.h"

void* catchMe();

#endif
