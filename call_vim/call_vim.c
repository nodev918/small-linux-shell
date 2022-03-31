#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
    const char *args[] = { "vim", "/home/ben/tmp3.txt", NULL };

    execvp("vim", args);

    exit(EXIT_SUCCESS);
}