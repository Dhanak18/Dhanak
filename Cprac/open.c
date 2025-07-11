#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){

// System Calls: open(), read(), write()

    int fd= open("try.txt", O_WRONLY  | O_CREAT, 0644);
    printf("%d\n", fd);

    char read_sc[100];
    read(fd, read_sc, sizeof(read_sc));

    char add_sc[]= "this will be added using the write system call";
    write(fd, add_sc, sizeof(add_sc));

// Library Calls: fopen(), fread(), fwrite()

    FILE *file_pointer= fopen("try.txt", "a+");
    printf("%p\n", file_pointer);

    char read_lc[100];
    fread(read_lc,sizeof(char), strlen(read_lc), file_pointer);

    char add_lc[]= "this will be added using the fwrite library call";
    fwrite(add_lc, sizeof(char), strlen(add_lc), file_pointer);

    return 0;
}