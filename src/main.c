#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dataProcessing.h"

int main(void)
{
    //----------------------------------BASICS-----------------------------
    // integer named x is set to 4
    int x = 4;

    // integer poiter named px is set to the adress of x
    int *px = &x;

    // integer named y is set to the thing pointed to by px"
    int y = *px;

    printf("O valor no addr 0x%X: %d\n", px, *px);
    //----------------------------------BASICS-----------------------------

    InitDataTest(100);
    // freeDataset(DataTest);
    // InitDataTest(1000);

    return 0;
}
