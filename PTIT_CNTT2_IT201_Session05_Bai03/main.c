#include <stdio.h>
int factorial(int n) {
    if (n==1) return 1;
    return n*factorial(n-1);
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
        return 0;
    }
    printf("%d", factorial(n));
    return 0;
}