#include <unistd.h>
#include <string.h>

int main() {
    char * s = "hello world";
    write(1, s, strlen(s));
    return 0;
}

