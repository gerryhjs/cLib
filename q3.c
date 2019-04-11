#include <stdio.h>

#define len 5

void transpose(int arr[len][len]);

int main() {
    int arr[len][len] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};
    for (int i=0;i<len;i++) {
        for (int j = 0; j < len; j++)
            printf("%-2d ", arr[i][j]);
        printf("\n");
    }
    printf("transpose:\n");
    transpose(arr);
    for (int i=0;i<len;i++) {
        for (int j = 0; j < len; j++)
            printf("%-2d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
//矩阵转置
void transpose(int arr[len][len])
{
    int clone[len][len];
    for (int i=0;i<len;i++)
        for (int j = 0; j < len; j++)
            clone[i][j]=arr[i][j];
    for (int i=0;i<len;i++) 
        for (int j = 0; j < len; j++)
            arr[j][i]=clone[i][j];
}
