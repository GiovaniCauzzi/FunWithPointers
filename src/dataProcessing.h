#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define dPRINT_DATASET_ON_INIT 1

typedef struct
{
    int numberOfLines;
    double data[][2];
} dataset;

// Global
dataset *DataTest;

void InitDataTest(int numberOfPoints);
void freeDataset(dataset *dataStruct);

#endif /* DATAPROCESSING_H */