#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
    char * s = "hello world";
    int file = open("/dev/tty", O_WRONLY);
    write(file, s, strlen(s));
    return 0;
}

