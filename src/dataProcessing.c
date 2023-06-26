#include "dataProcessing.h"

void PrintData(dataset *data2print)
{
    for (int i = 0; i < data2print->numberOfLines; i++)
    {
        printf("(x = %f ; y = %f)\n", data2print->data[i][0], data2print->data[i][1]);
    }
    return;
}

void InitDataTest(int numberOfPoints)
{
    DataTest = malloc(sizeof(dataset) + numberOfPoints * sizeof(double[2]));
    DataTest->numberOfLines = numberOfPoints;

    for (int i = 0; i < numberOfPoints; i++)
    {
        DataTest->data[i][0] = i;
        DataTest->data[i][1] = sin(i);
    }

    if (dPRINT_DATASET_ON_INIT)
    {
        PrintData(DataTest);
    }
    return;
}

void freeDataset(dataset *dataStruct)
{
    printf("----------------Memory Release----------------\n");
    free(dataStruct);
}
