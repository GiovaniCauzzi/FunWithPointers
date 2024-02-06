#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define dPRINT_DATASET_ON_INIT 
#define dRANGE_INIT -5
#define dSTEPS 0.01
#define dNUMBER_OF_POINTS dRANGE_INIT*(-2)*100

typedef struct
{
    //int numberOfLines;
    //double data[][2];
    float x[dNUMBER_OF_POINTS];
    float y[dNUMBER_OF_POINTS];
} dataset;

// Global
dataset *DataTest;

void InitDataTest(void);
void freeDataset(dataset *dataStruct);

#endif /* DATAPROCESSING_H */