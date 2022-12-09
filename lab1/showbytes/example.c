#include "ics.h"

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, size_t len);

void show_int (int x);

void show_float (float x);

void show_pointer(void *x);


int main ()
{
    const char *s="abcdef";
    show_bytes((byte_pointer)(s),strlen(s));
    return 0;
}

