#include "../main.h"

uint32 checksum() {
    return catchMe();
}

int main() {
    Pokemon( "Snivy", checksum );
    return 0;
}
