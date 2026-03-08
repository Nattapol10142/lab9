#include <stdio.h>

// ฟังก์ชันสลับค่าตัวแปร 3 ตัว โดยใช้ Pointer
void swapValue(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;   // นำ b ไปเก็บใน a
    *b = *c;   // นำ c ไปเก็บใน b
    *c = temp; // นำ a (จาก temp) ไปเก็บใน c
}

// ฟังก์ชันสลับค่าระหว่าง Array 2 ชุด
void swapArray(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main() {
    // --- Commit 1: swapValue ---
    int a = 1, b = 2, c = 3;
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    
    // ส่ง address (&) ของตัวแปรเข้าไป
    swapValue(&a, &b, &c); 
    
    printf("After swap function:  a=%d, b=%d, c=%d\n", a, b, c);

    // --- Commit 2: swapArray ---
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {99, 88, 77};
    int size = 3;

    printf("\n--- Before swapArray ---\n");
    printf("Array 1: %d %d %d\n", arr1[0], arr1[1], arr1[2]);
    printf("Array 2: %d %d %d\n", arr2[0], arr2[1], arr2[2]);

    swapArray(arr1, arr2, size);

    printf("--- After swapArray ---\n");
    printf("Array 1: %d %d %d\n", arr1[0], arr1[1], arr1[2]);
    printf("Array 2: %d %d %d\n", arr2[0], arr2[1], arr2[2]);

    return 0;
}
