#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc!=2) {
        printf("PLEASE INPUT YOUR NAME\n\n");
        exit(1);
    }
    printf("Hello, %s", argv[1]);
    return 0;
}