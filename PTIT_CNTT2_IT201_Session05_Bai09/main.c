#include <stdio.h>

int count(int row, int col, int i, int j) {
    // neu thoat khoi ma tran
    if (i>= row || j>= col) return 0;
    // neu toi o cuoi cung
    if (i==row-1 && j==col-1) return 1;// xac nhan 1 duong di
    // vì phải thử hết bằng cách sang trái hoặc sang phải=> i+1 hoặc j+1
    return count(row, col, i+1, j) + count(row, col, i, j+1);
    //               thử đi xuống   +  thử đi sang phải
    // return như vậy thì với mỗi lần xuống hoặc sang phải hàm sẽ kiểm tra xem có đến đích không

}
int main(void) {
    int row, col, i=0, j=0;
    scanf("%d %d", &row, &col);
    printf("Tong so duong di co the la : %d\n", count(row, col, i,j));
    return 0;
}