#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *generateVector(float *vector, int len) {
    for (int i=0; i<len; i++) {
        vector[i] = pow((i-len/2), 2);
    }

    return vector;
}

float *refineVector(float *vector, int len) {
    for (int i=0; i<len; i++) {
        vector[i] = sqrt(vector[i]);
    }

    return vector; 
}

float findSmallest(float *vector, int len) {
    float smallest = INFINITY;
    
    for (int i=0; i<len; i++) {
        if (vector[i] < smallest) smallest = vector[i];
    }

    return smallest;
}

float findGreatest(float *vector, int len) {
    float greatest = -INFINITY;

    for (int i=0; i<len; i++) {
        if (vector[i] > greatest) greatest = vector[i];
    }

    return greatest;
}