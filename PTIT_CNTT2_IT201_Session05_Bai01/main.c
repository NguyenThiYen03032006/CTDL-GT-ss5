#include <stdio.h>

int printfNumber(int n, int count) {
    if (count>n) return 0;
    printf("%d ", count);
    return printfNumber(n, count + 1);
}
int main(void) {
    int n;
    int count =1;
    scanf("%d", &n);
    printfNumber(n,count );
    return 0;
}