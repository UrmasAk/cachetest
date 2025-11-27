#include <stdio.h>
#include <time.h>

#define ARRAY_LENGTH 100000

int main(void) {

    clock_t start, end;

    int data[ARRAY_LENGTH];
    for (int i = 0; i < ARRAY_LENGTH; ++i) {
        data[i] = i;
    }
    volatile long sum = 0;

    start = clock();
    for (int i = 0; i < ARRAY_LENGTH; ++i) {
        sum += data[i];
    }
    end = clock();
    long time = end - start;


    printf("sum: %ld\n", sum);
    printf("start: %ld\n", start);
    printf("end: %ld\n", end);
    printf("Time elapsed: %ld", time);
    return sum;
}
