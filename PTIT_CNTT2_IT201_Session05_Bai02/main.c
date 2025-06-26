#include <stdio.h>
int sum(int n) {
    if (n==0) return 0;
    return n+sum(n-1);
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
        return 0;
    }
    printf("%d", sum(n));
    return 0;
}