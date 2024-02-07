#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define LOG_FILE "log.txt"


typedef int (*t_logger)(char* message);

void log(const int fd, const char *message)
{
    dprintf(fd, "%s", message);
}

void fileLogger(const char *message)
{
    const int fd = open(LOG_FILE, O_RDONLY);
    
    if (fd < 0)
    {
        perror("Error opening file");
        return;
    }

    log(fd, message);
    close(fd);
}

void shellLogger(const char *message)
{
    log(STDERR_FILENO, message);
}

int main(void)
{
    t_logger logger = fileLogger;
    logger("Message logged");
    return (EXIT_SUCCESS);
}