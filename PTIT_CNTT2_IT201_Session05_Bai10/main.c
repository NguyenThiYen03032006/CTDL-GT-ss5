#include <stdio.h>

int count(int row, int col, int blockR, int blockC, int i, int j) {
    // neu ra ngoai ma tran hoac vao o bi chan
    if (i>=row || j>=col ||(i==blockR && j==blockC)) return 0;
    if (i==row-1 && j==col-1) return 1;
    return count(row, col, blockR, blockC, i+1, j)+ count(row, col, blockR, blockC, i, j+1);
}
int main(void) {
    int row, col, blockR,blockC;
    scanf("%d %d",&row,&col);
    printf("Nhap vi tri o chan: \n");
    scanf("%d %d", &blockR, &blockC);
    // o bi chan phai thuoc trong ma tran va khac diem xuat phat vs diem ket thuc
    if (blockR>=row || blockC>=col || blockR<0 || blockC < 0 || (blockC ==0 && blockR ==0)||(blockC==row-1 && blockR ==col-1)) {
        printf("Vi tri chan khong hop le");
        return 0;
    }
    printf("%d", count(row,col,blockR,blockC,0,0));
    return 0;
}