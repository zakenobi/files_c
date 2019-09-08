#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count.h"
#include "run.h"
#include "char.h"

int result;
char table[50][1];
int main()
{
    result = mult(2,28);
    for (int i = 0; i < 50; i++)
    {
        table[i][1]=i;
    }
    insep(50,1,table);
}
