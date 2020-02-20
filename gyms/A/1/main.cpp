#include "main.h"

void* catchMe() {
    //TODO: Consider the following lines of code
    char arr[9] = {'R','a','p','i','d','a','s','h','\0'};

    char* ptr_arr[] = {arr + 1, &arr[4], arr + 2};
    char** ptr = ptr_arr;
    ptr++;

    // If the address of arr is 0x7000, what is the address stored in *ptr?
    ADDRESS = 0x????; // STUB: Replace 0x???? with the address

    // Don't touch this! This lets you catch the pokemon
    POKEBALL
}
