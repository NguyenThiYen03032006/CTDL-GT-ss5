#include <stdio.h>
int sum(int first, int second) {
    if (first > second) {
        return 0;
    }
    return first + sum(first+1, second);
}
int main(void) {
    int firstNumber, secondNumber;
    printf("Nhap so thu nhat: ");
    scanf("%d", &firstNumber);
    printf("Nhat thu so thu hai: ");
    scanf("%d", &secondNumber);

    if (firstNumber > secondNumber) {
        printf("So thu nhat phai nho hon so thu hai");
        return 0;
    }
    if (firstNumber<0 || secondNumber<0) {
        printf("Khong hop le");
        return 0;
    }
    printf("%d", sum(firstNumber, secondNumber));
    return 0;
}