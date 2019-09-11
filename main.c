#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#include "count.h"
#include "run.h"
#include "char.h"
#include "ret.h"

int *result;
char table[2][2];
int main()
{
    result = mult(2,28);
    for (int i = 0; i < 50; i++)
    {
        table[i][1]=i;
    }
    //insep(50,1,table);

    char test[2][2];
    result=ret(2,2);
    printf("%d",*(result+1));
}
