#include <stdio.h>

int main() {
    for (int n=1,i=0;i<6;i++) {
        for (int j = 0; j <= 5-i; j++)
            printf("%-3d ", n++);
        printf("\n");
    }
}
