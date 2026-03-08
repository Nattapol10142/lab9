#include <stdio.h>

void swapValue(int *a, int *b, int *c) {
    int temp = *a; // เก็บ 1 ไว้
    *a = *b;       // a กลายเป็น 2
    *b = *c;       // b กลายเป็น 3
    *c = temp;     // c กลายเป็น 1 (ค่า a เดิม)
}

void swapArray(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main() {
    int a = 1, b = 2, c = 3;
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    
    swapValue(&a, &b, &c); 
    
    printf("After swap function:  a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}
