#include "ctype.h"

int isgraph(int c)
{
    return isprint(c) && c != ' ';
}