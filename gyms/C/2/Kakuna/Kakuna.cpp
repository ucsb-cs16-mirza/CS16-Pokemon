#include "../main.h"

uint32 checksum() {
    return catchMe();
}

int main() {
    Pokemon( "Kakuna", checksum );
    return 0;
}
