#include <stdio.h>

#define len 5
int main() {
    int arr[len] = {2, 1, 3, 5, 4};
    int t;
    scanf("%d", &t);
    int find=0;
    for (int i=0;i<len;i++)
        if (arr[i]==t){
            find=1;
            for (int j=i;j<len-1;j++)
                arr[j]=arr[j+1];
            arr[len-1]='\0';
            break;
        }
    if (!find) printf("Not found\n");
    else
        for (int i=0;i<len-1;i++)
        printf("%d ",arr[i]);
    return 0;
}
