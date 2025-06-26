#include <stdio.h>
 int showFibonacci(int arr[], int start, int end) {
     if (start == end) {
         return 0;
     }
     arr[start]= arr[start-2] + arr[start-1];
     printf("%d ", arr[start]);
     return showFibonacci(arr, start + 1, end);
 }

int main(void) {
    int n;
    scanf("%d", &n);
     if (n<=0) {
         printf("Input khong hop le");
         return 0;
     }
     int arr[n];
     arr[0] = 0;
     arr[1] = 1;

     if (n>=2) {
         printf("%d %d ", arr[0], arr[1]);
         showFibonacci(arr,2,n);
     }else {
         for (int i = 0; i < n; i++) {
             printf("%d ", arr[i]);
         }
        return 0;
     }

    return 0;
}