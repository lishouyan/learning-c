#include <iostream>
#include <sys/socket.h>

typedef std::basic_string <char> string;

typedef struct Node {
    string content;
    struct Node *next;
} LinkList;

int main() {
    string  str = "你好";
    std::cout << str << std::endl;
    return 0;
}
