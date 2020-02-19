#include "pokemon.h"

using namespace std;

Pokemon::Pokemon( std::string name, uint32 ( *checksum )() ) {
    this->name = name;
    this->checksum = checksum;
}

Pokemon::~Pokemon() {
    uint32 i = 0;
    unsigned char c;
    cout << endl << endl<< "Wild ";
    for( ; i < name.size(); ++i ) {
        c = name[ i ];
        if( name[ i ] >= 'A' && name[ i ] <= 'Z' ) cout << name[ i ];
        else cout << ( c -= ( 'a' - 'A' ) );
    }
    cout << " appeared!" << endl << endl;

    cout << "> Catch" << endl;
    
    cout << "Your code is: ";

    uint32 seed = 0;
    i = name.size();
    while( i-- ) seed += name[ i ] | i;
    seed += ( *checksum )();
    uint32 x, y;
    y = ( x = seed << 1 ) >> 2;
    uint32 x_, y_, _;
    x_ = y;
    x ^= x << 23;
    y_ = x ^ y ^ ( x >> 17 ) ^ ( y >> 26 );
    _ = y_ + y;
    x = x_;
    y = y_;
    cout << name << "-";
    i = 4;
    while( i-- ) {
        c = _ & 0xF;
        if( c >= 0x0 && c <= 0x9 ) cout << ( c += '0' );
        else cout << ( ( c -= 0xA ) += 'A' );
        _ = _ >> 4;
    }
    cout << endl;
}
