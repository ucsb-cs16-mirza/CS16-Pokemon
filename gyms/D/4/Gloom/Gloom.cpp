#include "../main.h"

uint32 checksum() {
    return catchMe();
}

int main() {
    Pokemon( "Gloom", checksum );
    return 0;
}
