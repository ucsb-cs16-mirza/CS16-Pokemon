#include "../main.h"

uint32 checksum() {
    Encounter e1;
    Encounter e2;
    e1.pokemon = "Tentacool";
    e1.number = 72;
    e2.pokemon = "Eevee";
    e2.number = 133;
    catchMe(&e1, &e2);
    uint32 x = 0;
    uint32 i = e2.pokemon.size();
    while( i-- ) x += e2.pokemon[ i ];
    x += e2.number;
    i = e1.pokemon.size();
    while( i-- ) x -= e1.pokemon[ i ];
    x -= e1.number;
    return x;
}

int main() {
    Pokemon( "Eevee", checksum );
    return 0;
}
