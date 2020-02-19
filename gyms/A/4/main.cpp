#include "main.h"

using namespace std;

// We have a struct defined like so:
/*
struct Encounter {
    string pokemon;
    int number;
};
*/

/*
    Write a function called catchMe(), which has no return value, and accepts
    a pointer to an Encounter "e1", and another Encounter "e2". After catchMe()
    is finished executing, all of the Encounter's fields should swap.

    E.G. Before:
    Encounter e1;                       Encounter e2
    {                                   {
        string pokemon; // "Tentacool"      string pokemon; // "Eevee"
        int number;     // 72               int number;     // 133
    }                                   }

    After:
    Encounter e1;                       Encounter e2
    {                                   {
        string pokemon; // "Eevee"          string pokemon; // "Tentacool"
        int number;     // 133              int number;     // 72
    }                                   }
*/
