#include <stdio.h>

#define len 5
int main() {
    int arr[len] = {2, 1, 3, 5, 4};
    //sort
    for (int i=0;i<len;i++) {
        int flag=1;
        for (int j = i; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=0;
            }
        }
        if (flag==0) break;
    }
    for (int i=0;i<len;i++)
        printf("%d ",arr[i]);
    return 0;
}
