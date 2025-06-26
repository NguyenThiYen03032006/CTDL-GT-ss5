#include <stdio.h>

#include <string.h>

int check(char str[],int count, int length) {
    if (count>=length) {
        return 1;
    }
    if (str[count]!=str[length-1-count]) {
        return 0;
    }
    return check(str,count+1,length);
}
int main(void) {
    char str[50];
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    int count=0;
    if (check(str,count, length)) {
        printf("Palindrome valid\n");
    }else {
        printf("Palindrome invalid\n");
    }

    return 0;
}