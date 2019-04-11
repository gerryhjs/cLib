#include <stdio.h>

#define len 5
int main() {
    int arr[len] = {2, 1, 3, 5, 4};
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i=0;i<len;i++)
        printf("%d ",arr[i]);
    return 0;
}
