#include <stdio.h>

int main() {
    char arr[] = "hello";
    char *p = "hello";

    arr[0] = 'H';
    printf("%s\n", arr);

    // p[0] = 'H'; // p는 수정하면 안됨
    printf("%s\n", p);

    return 0;
}