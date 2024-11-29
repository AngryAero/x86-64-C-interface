#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void asm_DAXPY(long long int n, int a, double* x, double* y, double* z);

void DAXPY(long long int n, int a, double* x, double* y, double* z) {
    int i;
    for (i = 0; i < n; i++) {
        z[i] = a * x[i] + y[i];
    }
}

void init_x(double* x) {
    int i;
    for (i = 0; i < 3; i++) {
        x[i] = i + 1;
    }
}

void init_y(double* y) {
    int i;
    for (i = 0; i < 3; i++) {
        y[i] = i + 11;
    }
}

void print_first_ten(double* arr) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
}

int main() {
    clock_t start, end;
    double executionTime;

    long long int n = 1LL << 28;
    int a = 2;

    double* x = (double*)calloc(n, sizeof(double));
    double* y = (double*)calloc(n, sizeof(double));
    double* z = (double*)calloc(n, sizeof(double));

    init_x(x);
    init_y(y);

    // DAXPY in C
    printf("--- DAXPY in C ---\n");

    start = clock();
    DAXPY(n, a, x, y, z);
    end = clock();
    executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution Time: %lf s\n", executionTime);

    print_first_ten(z);

    // DAXPY in x86_64
    printf("\n--- DAXPY in x86_64 ---\n");

    start = clock();
    asm_DAXPY(n, a, x, y, z);
    end = clock();
    executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution Time: %lf s\n", executionTime);

    print_first_ten(z);

    free(x);
    free(y);
    free(z);
    return 0;
}
