#include <stdio.h>
#include <stdlib.h>

#define len 20

void qs(int arr[len],int left,int right)
;

int main() {
    int arr[len];
    for (int i=0;i<len;i++)
        arr[i]= rand()%100;

    //sort
    qs(arr,0,len-1);

    for (int i=0;i<len;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
void qs(int arr[len],int left,int right)
{
    if (left>=right) return;

    for (int i=0;i<len;i++) {
        if (i==left) printf("{");

        if (i == left)
            printf("[%d]", arr[i]);
        else
            printf("%d", arr[i]);

        if (i==right) printf("}");
        printf(" ");
    }

    printf("\n");


    int tmp[len];
    for (int i=0;i<len;i++)
        tmp[i]=0;

    int key=arr[left];
    printf("key=%d\n",arr[left]);
    int l=left;
    int r=right;


    for (int i=left+1;i<=right;i++)
    {
        if (arr[i]>key)
        {
            tmp[r]=arr[i];
            r--;
        }
        else
        {
            tmp[l]=arr[i];
            l++;
        }
//        for (int t=0;t<=right-left;t++)
//            printf("%d ",tmp[t]);
//        printf("\n");
    }

    for (int i=left;i<=right;i++)
        arr[i]=tmp[i];
    arr[l]=key;

    for (int i=0;i<len;i++) {
        if (i==left) printf("{");

        if (i == l)
            printf("[%d]", arr[i]);
        else
            printf("%d", arr[i]);

        if (i==right) printf("}");
        printf(" ");
    }
    printf("\n");
    printf("\n");

   qs(arr,left,l-1);
    qs(arr,r+1,right);

}
