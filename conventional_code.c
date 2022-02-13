#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *generateVector(int len) {
    float *vector;
    vector = malloc(len*sizeof(float));

    for (int i=0; i<len; i++) {
        vector[i] = pow((i-len/2), 2);
    }

    return vector;
}

float *refineVector(float vector[], int len) {
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

int main() {
    float *v;
    v = generateVector(10);

    for (int i=0; i<10; i++) printf("%f ", v[i]);
    printf("\n");

    v = refineVector(v, 10);

    for (int i=0; i<10; i++) printf("%f ", v[i]);
    printf("\n");

    float smallest = findSmallest(v, 10);
    float greatest = findGreatest(v, 10);

    printf("Smallest: %f\n", smallest);
    printf("Greatest: %f\n", greatest);

    return 0;
}