#include <stdio.h>
#include <stdlib.h>

int sumArr(int arr[], int start, int end) {
    if (start > end) {
        return 0;
    }
    return arr[start] + sumArr(arr, start + 1, end);
}
int main(void) {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Nhap phan tu cua mang \n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", sumArr(arr, 0, n-1));
    return 0;
}
