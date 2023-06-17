#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>

#define STDERR_FILENO 2

/**
 * main - Entry point
 *
 * Description: Prints a message to the standard error output.
 *
 * Return: Always 1 (Exit failure)
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    syscall(SYS_write, STDERR_FILENO, message, strlen(message));
    return (1);
}
