#include <stdio.h>

void copy_arr(double [], double [], int);
void copy_ptr(const double [], double *, int);

int main(void) {

    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];

    printf("-------------------- chapter 10-2 test code below---------");

    copy_arr(source, target1, 5);
    for (int i=0; i<sizeof(target1)/sizeof(target1[0]); i++) {
        printf("%.1f\t", target1[i]);
    }

    printf("\n");

    copy_ptr(source, target2, 5);
    for (int i=0; i<sizeof(target2)/sizeof(target2[0]); i++) {
        printf("%.1f\t", *(target2 + i));
    }

    printf("\n");

    printf("-------------------- chapter 10-3 test code below---------");


    return 0;
}

void copy_arr(double source[], double target[], int N) {

    for (int i=0; i<N; i++) {
        target[i] = source[i];
    }

}

void copy_ptr(const double source[], double *target, int N) {

    for (int i=0; i<N; i++) {
        *target++ = *(source + i);
    }

}