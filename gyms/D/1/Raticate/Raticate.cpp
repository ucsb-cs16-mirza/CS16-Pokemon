#include "../main.h"

uint32 checksum() {
    void* buffer = catchMe();
    uint32 s = *( ( uint32* ) buffer );
    free( buffer );
    return s;
}

int main() {
    Pokemon( "Raticate", checksum );
    return 0;
}
