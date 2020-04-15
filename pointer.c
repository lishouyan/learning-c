#include <stdio.h>
#include <string.h>

#define NUM 10

//指针练习
int main() {

    printf("----------------------------\n");
    printf("char sizeof: %lu\n", sizeof(char));
    printf("_Bool sizeof: %lu\n", sizeof(_Bool));

    printf("int sizeof: %lu\n", sizeof(int));
    printf("long int sizeof: %lu\n", sizeof(long int));
    printf("long long int sizeof: %lu\n", sizeof(long long));

    printf("float sizeof: %lu\n", sizeof(float));
    printf("double sizeof: %lu\n", sizeof(double));
    printf("-----------------------------\n");



    /* 字符串 */
    char str    = 'C';
    int strcode = 67;

    printf("输出 %c - %d \n", str, str);
    printf("输出 %c - %d \n", strcode, strcode);

    unsigned char height = 170;
    printf("身高: %d\n", height);

    char string[] = "abc2222\0";
    printf("字符串: %s 长度: %lu  地址: %p \n", string, strlen(string), string);

    char firstname[]    = "李\0";
    char lastname[]     = "守岩\0";

    printf("-----------------------------\n");

    /* 指针 */
    int num = 1;
    int *nump; //声明指针变量

    nump = &num; //获取变量a的地址,赋值给指针变量;


    printf("变量num的值: %d\n", num);
    printf("变量num的地址: %p\n", &num);
    printf("指针nump的值(实际上是地址): %p ,指针的地址: %p\n", nump, &nump);
    printf("指针nump的地址得到的值: %d\n",  *nump);
    printf("-----------------------------\n");


    /* 指针数组 */
    char *books[] = {
            "onessssssssssssss",
            "two",
            "three"
    };


    printf("数组长度: %lu  类型大小: %lu\n", sizeof(books) / sizeof(*books), sizeof(*books));
    //获取数组长度，数组大小/类型大小
    int len = sizeof(books) / sizeof(*books);
    for (int i = 0; i < len; i++) {
        printf("输出: %s 大小: %lu \n", books[i], strlen(books[i]));
    }
    return 0;
}