#include "../main.h"

uint32 checksum() {
    return catchMe();
}

int main() {
    Pokemon( "Diglett", checksum );
    return 0;
}
