#include <fcntl.h>
#include <stdlib.h>

#define LOG_FILE "log.txt"

void log(const int fd, const char *message)
{
    dprintf(fd, "%s", message);
}

int main(void)
{
    const int fd = open(LOG_FILE, O_WRONLY);
    
    if (fd < 0)
    {
        perror("Error opening file");
        return (EXIT_FAILURE);
    }

    log(fd, "Message logged");
    close(fd);
    return (EXIT_SUCCESS);
}