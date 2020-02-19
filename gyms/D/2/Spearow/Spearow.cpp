#include "../main.h"

uint32 checksum() {
    void* buffer = catchMe();
    uint32 x = *( ( uint32* ) buffer );
    uint32 i = x;
    char* arr = ( char* ) ( ( ( uint32* ) buffer ) + 1 );
    while( i-- ) x += arr[ i ];
    free( buffer );
    return x;
}

int main() {
    Pokemon( "Spearow", checksum );
    return 0;
}
