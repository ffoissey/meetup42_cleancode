#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFFER_SIZE 64

int open_file(const char *filename)
{
    const int fd = open(filename, O_RDONLY);

    if (fd < 0)
    {
        perror("Error opening file");
    }
    else
    {
        printf("File open");
    }
    return (fd);
}

void read_file(const int fd)
{
    char    buffer[BUFFFER_SIZE];
    ssize_t bytes_read;

    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytes_read] = '\0';
        printf("%s", buffer);
    }
}

void close_file(const int fd)
{
    printf("File closed");
    close(fd);
}

void process_file(const char *filename)
{
    const int fd = open_file(filename);

    if (fd >= 0)
    {
        read_file(fd);
        close_file(fd);
    }
}

int main(void)
{
    process_file("example.txt");
    return (EXIT_SUCCESS);
}
