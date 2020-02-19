#include "../main.h"

uint32 checksum() {
    Encounter e;
    catchMe(e);
    uint32 x = 0;
    uint32 i = e.pokemon.size();
    while( i-- ) x += e.pokemon[ i ];
    x += e.number;
    return x;
}

int main() {
    Pokemon( "Poliwag", checksum );
    return 0;
}
