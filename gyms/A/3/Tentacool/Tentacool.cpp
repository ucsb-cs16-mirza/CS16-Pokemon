#include "../main.h"

uint32 checksum() {
    Encounter e;
    catchMe(&e, "Tentacool", 72);
    uint32 x = 0;
    uint32 i = e.pokemon.size();
    while( i-- ) x += e.pokemon[ i ];
    x += e.number;
    return x;
}

int main() {
    Pokemon( "Tentacool", checksum );
    return 0;
}
