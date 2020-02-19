#include "../main.h"

uint32 checksum() {
    Encounter e;
    e.pokemon = "Growlithe";
    uint32 x = catchMe(e);
    return x + e.number;
}

int main() {
    Pokemon( "Growlithe", checksum );
    return 0;
}
