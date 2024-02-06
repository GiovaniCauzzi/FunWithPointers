#include "dataProcessing.h"


void PrintData(dataset *data2print)
{
    printf("X       |       Y\n");
    for (int i = 0; i < dNUMBER_OF_POINTS; i++)
    {
        printf("%f ; %f\n", data2print->x[i], data2print->y[i]);
    }
    return;
}

void InitDataTest(void)
{
    DataTest =  malloc(dNUMBER_OF_POINTS * 2*sizeof(float)); //+ numberOfPoints * sizeof(double[2]));
    

    for (int i = 0; i < dNUMBER_OF_POINTS; i++)
    {
        DataTest->x[i] = dRANGE_INIT + i*dSTEPS;
        //y = 0.5x^{3} + 2x^{2} - 2
        DataTest->y[i] = 0.5*pow((i*dSTEPS+dRANGE_INIT),3) + 2*pow((i*dSTEPS+dRANGE_INIT),2) - 2;
    }

    #ifdef dPRINT_DATASET_ON_INIT
        PrintData(DataTest);
    #endif

    return;
}

void freeDataset(dataset *dataStruct)
{
    printf("----------------Memory Release----------------\n");
    free(dataStruct);
}
