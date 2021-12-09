#include "lib.h"

float max_array(float numero[], unsigned int n) {
    float actual = 0;
    float prec = 0;
    float res = 0;
    for (int i = 0; i<n; i++) {
        actual = numero[i];
        if (i == 0) {
            prec = actual;
        }
        else {
            prec = res;
        }
        if(actual >= prec) {
            res = actual;
        }
        else {
            res = prec;
        }
    }
    return res;
}

