#include <iostream>
#include <stdio.h>
#include <sys/socket.h>

#define NUM 10

typedef std::basic_string <char> string;

typedef struct Node {
    string content;
    struct Node *next;
} LinkList;

int main() {

    int a = 1;
    int *ap = &a;


    printf("值: %d\n", a);
    printf("地址: %p\n", ap);

    /*
    int a[3];

    for (int i = 0; i < 3; i++ ) {
        scanf("%i", &a[i]);
        printf("输入的值为 : %d\n", a[i]);
    }
    */

    return 0;
}
