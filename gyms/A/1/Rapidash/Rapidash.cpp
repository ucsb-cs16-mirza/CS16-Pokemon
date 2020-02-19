#include "../main.h"

uint32 checksum() {
    void* buffer = catchMe();
    uintptr_t orig = 0x7000;
    return ( ( char* ) buffer ) - ( ( char* ) orig );
}

int main() {
    Pokemon( "Rapidash", checksum );
    return 0;
}
