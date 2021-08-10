#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the std output
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters printed, 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rcount, wcount;
char *buffer;

if (filename == NULL)
        return (0);

fd = open(filename, O_RDWR);
if (fd == -1)
        return (0)

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
        free(buffer);
        return (0);
}

rcount = read(fd, butter, letters);
if (rcount == -1)
        return (0);

wcount = write(STDOUT_FILENO, buffer, rcount);

if (wcount == -1 || rcount != wcount)
        return (0);

free(buffer);

close(file);

return (wcount);
}
