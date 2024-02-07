#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFFER_SIZE 64

void process_file(const char *filename)
{
    const int   fd = open(filename, O_RDONLY);
    char        buffer[BUFFFER_SIZE];
    ssize_t     bytes_read;

    if (fd < 0)
    {
        perror("Error opening file");
        return;
    }
    printf("File open");
    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytes_read] = '\0';
        printf("%s", buffer);
    }
    printf("File closed");
    close(fd);
}

int main(void)
{
    process_file("example.txt");
    return (EXIT_SUCCESS);
}
