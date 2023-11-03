#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, r_file, w_out;
char *stored_file;

if (!filename)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
stored_file = malloc(sizeof(char) * letters + 1);
r_file = read(file, stored_file, letters);
stored_file[letters] = '\0';

w_out = write(STDOUT_FILENO, stored_file, r_file);
if (w_out == -1)
return (0);
free(stored_file);
close(file);

return (w_out);
}
