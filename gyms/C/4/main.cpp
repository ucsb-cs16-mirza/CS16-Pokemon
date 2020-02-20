#include "main.h"

void* catchMe() {
    //TODO: Consider the following lines of code
    char arr[9] = {'C','l','e','f','a','b','l','e','\0'};

    char* ptr = arr + 5;
    ptr = &(ptr[1]);
    ptr++;

    // If the address of arr is 0x7000, what is the address stored in ptr?
    ADDRESS = 0x????; // STUB: Replace 0x???? with the actual address

    // Don't touch this! This lets you catch the pokemon
    POKEBALL
}
