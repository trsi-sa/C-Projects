#include <stdio.h>
int main() {
    for (int i = 1; i < 1001; i++) {
        printf("\nTable Number %d :", i);
        for (int j = 0; j < 11; j++) {
            printf("\n%d * %d = %d", i, j, i * j); } }
    return 0; }